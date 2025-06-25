#include <stdio.h>
#include <string.h>
// Function to print the line recursively
void printLine() {
    printf("This is a recursive line.\n");
}

void au();

int main() {


au();
    return 0;
}
void au()
{
   char username[20];
   char password[20];

   printf("\t\tWELCOME TO CODE UNIVERSITY ADMIN PANEL")
   printf("\n\n\t\t To Access the Students Record Panel   ")

    // Prompt the user to enter the username and password
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    // Check if the username and password are correct
    if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0) {
        printf("Welcome, %s!\n", username);

        // Call the function to print the line recursively
        printLine();
    } else {
        printf("Invalid username or password.\n");
    }
    au();
}

