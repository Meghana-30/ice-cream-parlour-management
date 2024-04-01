#include <stdio.h>

// Define a structure to represent ice cream flavors
struct icecream
{
    char flavour[20];
};

int main()
{
    // Create an array of struct icecream to store 10 flavors
    struct icecream name[10] = { "Vanilla", "Strawberry", "Chocolate", "Pista", "Butterscotch","Mango", "Chocovanilla", "Coffee", "Caramel", "Brownie"};

    // Display a welcome message and menu options
    printf("Welcome To Ice Cream Parlour\n");
    printf("1. Show menu\n");
    printf("2. Exit\n");

    // Declare a variable to store user's choice
    int choice;
    // Get user's choice
    scanf("%d", &choice);

    // Check user's choice
    if (choice == 1)
    {
        printf("We have 10 flavors for you\n");
        // Loop through the flavors and print them along with their index
        for (int i = 0; i < 10; i++) {
            printf("%d. %s\n", i + 1, name[i].flavour);
        }
    }
    else
    {
        // User chose to exit
        printf("Thank you, visit us again\n");
    }

    return 0;
}
