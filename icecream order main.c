int main() {
    printf("Welcome To Ice Cream Parlour\n");
    printf("1. Show menu\n");
    printf("2. Exit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            select();
            order();
            break;
        case 2:
            printf("Thank you visit us again\n");
            break;
        default:
            printf("Invalid option\n");
            break;
    }

    return 0;
}
