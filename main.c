#include <stdio.h>

// Define a structure to represent ice cream flavors
struct icecream {
    char flavour[20];
};

int main() {
    // Create an array of struct icecream to store 10 flavors
    struct icecream name[10] = {"Vanilla", "Strawberry", "Chocolate", "Pista", "Butterscotch","Mango", "Chocovanilla", "Coffee", "Caramel", "Brownie"};

    // Display a welcome message and menu options
    printf("Welcome To Ice Cream Parlour\n");
    printf("1. Show menu\n");
    printf("2. Exit\n");

    // Declare variables to store user's choices
    int choice, choice2, choice3;

    // Get user's choice
    scanf("%d", &choice);

    // Check user's choice
    if (choice == 1) {
        printf("We have 10 flavors for you\n");
        
        // Loop through the flavors and print them along with their index
        for (int i = 0; i < 10; i++) {
            printf("%d. %s\n", i + 1, name[i].flavour);
        }
        
        // Prompt the user to choose a flavor
        printf("Choose a flavor (1-10): ");
        scanf("%d", &choice2);

        // Check if the chosen flavor is valid
        if (choice2 >= 1 && choice2 <= 10) {
            printf("You chose %s\n", name[choice2 - 1].flavour);

            // Prompt the user to exit
            printf("Press 11 to exit\n");
            scanf("%d", &choice3);
            if (choice3 == 11) {
                printf("Thank you, visit us again\n");
            }
        } else {
            printf("Invalid flavor choice\n");
        }
    } else if (choice == 2) {
        // User chose to exit directly
        printf("Thank you, visit us again\n");
    } else {
        // Invalid choice
        printf("Invalid choice\n");
    }

    return 0;
}
