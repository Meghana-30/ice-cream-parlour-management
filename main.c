#include <stdio.h>

// Function declarations
void select(); // Function to handle ice cream selection

// Global variables
int choice; // Main menu choice
int choice2; // Ice cream flavor choice
int choice3; // Ice cream size choice
int confirm; // Confirmation choice

// Array of ice cream flavors
char flavour[20][20]={"Vanilla","Strawberry","Chocolate","Pista","Butterscotch","Mango","Chocovanilla","Coffee","Caramel","Brownie","Coconut"};

// Array of prices for large size ice creams
int price_l[]={30,40,50,50,40,45,40,50,50,60};

// Array of prices for small size ice creams
int price_s[]={15,20,25,25,20,25,20,25,25,30};

// Main function
int main() {

    printf("Welcome To Ice Cream Parlour\n");
    printf("1. Show menu\n");
    printf("2. Exit\n");
    scanf("%d",&choice);

    // Check user choice
    if(choice==1){
        select(); // Call function to handle ice cream selection
    }
    else{
        printf("Thank you, visit us again\n");
    }

    return 0;
}

// Function to handle ice cream selection
void select(){
    int num=1; // Variable to control loop

    // Loop until the user exits
    while (num!=0){     

        // Switch based on the main menu choice
        switch(choice){     

            // Case 1: Show ice cream menu
            case 1:
                printf("We have 10 flavours for you\n");

                // Display available flavors
                for(int i=0;i<10;i++){
                    printf("%d. %s\n",i+1,flavour[i]);
                }

                // Get user's flavor choice
                printf("Select your choice: \n");
                scanf("%d",&choice2);

                // Check if the choice is valid
                if(choice2 >= 1 && choice2 <= 10){

                    // Get user's size choice
                    printf("Select the size: \n1. Small\n2. Large\n");
                    scanf("%d",&choice3);

                    // Check if the size choice is valid
                    if(choice3==1){
                        printf("You chose small size %s ice-cream\nIt costs Rs.%d\n",flavour[choice2-1],price_s[choice2-1]);
                    }
                    else if(choice3==2){
                        printf("You chose large size %s ice-cream\nIt costs Rs.%d\n",flavour[choice2-1],price_l[choice2-1]);
                    }
                    else{
                        printf("Invalid option\nPlease retry with a valid option\n");
                        break;
                    }

                    // Ask for confirmation
                    printf("Confirm your order:\n1. Confirm\n2. Cancel\n");
                    scanf("%d",&confirm);

                    // Check confirmation choice
                    if(confirm==1){
                        printf("Your order is confirmed\nThank you, visit us again\n");
                        num=0; // Exit loop
                    }
                    else{
                        printf("As you cancelled, do you want to select another flavour?\n");
                        printf("1. Yes\n2. Exit\n");
                        int reorder;
                        scanf("%d",&reorder);
                        if(reorder==1){
                            // Allow user to reorder
                        }
                        else{
                            num=0; // Exit loop
                            printf("Thank you, visit us again\n");
                        }
                    }
                }
                else{
                    printf("Invalid option\nPlease retry with a valid option\n\n");
                }
                break;

            // Case 2: Exit
            case 2:
                printf("Thank you, visit us again\n");
                num=0; // Exit loop
                break;

            // Default case: Invalid option
            default:
                printf("Invalid option\n");
                num=0; // Exit loop
                break;
        }
    }
}
