#include <stdio.h>

// Global variables declaration
int choice;         // Variable to store user's choice
int choice2;        // Variable to store user's choice for flavor
int choice3;        // Variable to store user's choice for size
int choice4;        // Variable to store user's choice for ordering more
char flavour[20][20]={"Vanilla","Strawberry","Chocolate","Pista","Butterscotch","Mango","Chocovanilla","Coffee","Caramel","Brownie","Coconut"}; // Array to store available flavors
int price_l[]={30,40,50,50,40,45,40,50,50,60};    // Array to store prices for large size
int price_s[]={15,20,25,25,20,25,20,25,25,30};    // Array to store prices for small size
int bill[10];       // Array to store bill details
int j=0;            // Variable to keep track of bill array index
int confirm;        // Variable to store user's confirmation choice
int end;            // Variable to store user's choice to exit the program

// Function to select flavor, size, and order more
void select(){
    int num=1;
    while (num!=0){
        switch(choice){     
            case 1:
                // Display available flavors
                printf("We have 10 flavours for you\n");
                for(int i=0;i<10;i++){
                    printf("%d. %s\n",i+1,flavour[i]);
                }
                // Select flavor
                printf("select your choice: \n");
                scanf("%d",&choice2);
                if(choice2>=1 && choice2<=10)
                {
                    // Select size
                    printf("Select the size \n1.Small \n2.Large\n");
                    scanf("%d",&choice3);
                    if(choice3==1){
                        // Display selected flavor and size with price
                        printf("You chose small size %s ice-cream \nIt costs Rs.%d\n",flavour[choice2-1],price_s[choice2-1]);
                        // Add price to bill array
                        bill[j]=price_s[choice2-1];
                        j++;
                    }
                    else if(choice3==2)
                    {
                        // Display selected flavor and size with price
                        printf("You chose large size %s ice-cream \nIt costs Rs.%d\n",flavour[choice2-1],price_l[choice2-1]);
                        // Add price to bill array
                        bill[j]=price_l[choice2-1];
                        j++;
                    }
                    else
                    {
                        // Invalid size option
                        printf("invalid option \nretry with valid option\n");
                        break;
                    }
                    // Ask user to order more
                    printf("Do you want to order more \n1.Yes \n2.No\n");
                    scanf("%d",&choice4);
                    if(choice4==1){
                        // Continue ordering
                    }
                    else
                    {
                        // Calculate and display bill amount
                        int sum=0;
                        for(int i=0;i<10;i++){
                            sum=sum+bill[i];
                        }
                        printf("Bill amount is Rs.%d\n",sum );
                        // Confirm order
                        printf("Confirm your order\n 1.confirm\n 2.cancel\n");
                        scanf("%d",&confirm);
                        if(confirm==1)
                        {
                            // Order confirmed
                            printf("your order confirmed\nThank you visit us again\n");
                            printf("Press 0 to exit\n");
                            scanf("%d",&end);
                            if(end==0)
                            {
                                // Exit the program
                                num=0;
                                break;
                            }
                        }
                        else{
                            // Order cancelled
                            printf("As you cancelled, Do u want select another flavour\n");
                            printf("1.Yes\n2.exit\n");
                            int reorder;
                            scanf("%d",&reorder);
                            if(reorder==1)
                            {
                                // Select another flavor
                            }
                            else{
                                // Exit the program
                                num=0;
                                printf("Thank you visit us again\n");
                            }
                        }
                    }
                }
                else{
                    // Invalid flavor option
                    printf("invalid option \nretry with valid option\n\n");
                }
                break;
            case 2:
                // Exit the program
                printf("Thank u visit us again\n");
                num=0;
                break;
            default:
                // Invalid choice
                printf("invalid option");
                num=0;
                break;
        }
    }
}

// Main function
int main()
{
    // Display welcome message and options
    printf("Welcome To Ice Cream Parlour\n");
    printf("1.Show menu\n");
    printf("2.exit\n");
    scanf("%d",&choice);
    if(choice==1){
        // Call select function to start ordering
        select();
    }
    else{
        // Exit the program
        printf("Thank you visit us again\n");
    }

    return 0;
}
