void order() {
    int choice2, choice3, choice4;
    int sum = 0;
    int confirm;
    int end;
    int num = 1;

    while (num != 0) {
        printf("Select your choice: \n");
        scanf("%d", &choice2);

        if (choice2 >= 1 && choice2 <= 10) {
            printf("Select the size \n1. Small \n2. Large\n");
            scanf("%d", &choice3);

            if (choice3 == 1) {
                printf("You chose small size %s ice-cream \nIt costs Rs.%d\n", flavour[choice2 - 1], price_s[choice2 - 1]);
                bill[j++] = price_s[choice2 - 1];
            } else if (choice3 == 2) {
                printf("You chose large size %s ice-cream \nIt costs Rs.%d\n", flavour[choice2 - 1], price_l[choice2 - 1]);
                bill[j++] = price_l[choice2 - 1];
            } else {
                printf("Invalid option \nRetry with valid option\n");
                continue;
            }

            printf("Do you want to order more? \n1. Yes \n2. No\n");
            scanf("%d", &choice4);

            if (choice4 == 1) {
                continue;
            } else {
                for (int i = 0; i < j; i++) {
                    sum += bill[i];
                }
                printf("Bill amount is Rs.%d\n", sum);
                printf("Confirm your order\n1. Confirm\n2. Cancel\n");
                scanf("%d", &confirm);

                if (confirm == 1) {
                    printf("Your order confirmed\nThank you visit us again\n");
                    printf("Press 0 to exit\n");
                    scanf("%d", &end);
                    if (end == 0) {
                        num = 0;
                    }
                } else {
                    printf("As you cancelled, Do you want to select another flavor?\n");
                    printf("1. Yes\n2. Exit\n");
                    int reorder;
                    scanf("%d", &reorder);
                    if (reorder != 1) {
                        num = 0;
                        printf("Thank you visit us again\n");
                    }
                }
            }
        } else {
            printf("Invalid option \nRetry with valid option\n\n");
        }
    }
}
