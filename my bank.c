#include <stdio.h>
#include <stdlib.h>  
#include <unistd.h>  

int main() {

    int atmPin = 1234;

    int card;
    int pin;
    int option;
    int Money;

    int amount;
    int deposit;

    printf("....................................\n");
    printf(". | Welcome to the ATM Service |   .\n");
    printf("....................................\n\n");

    printf("Please enter your initial balance: ");
    scanf("%d", &Money);

    printf("Please enter your debit card number: ");
    scanf("%d", &card);

    sleep(1);

    printf("Please enter your 4-digit secret PIN: ");
    scanf("%d", &pin);

    if (pin == atmPin) {

            printf("┌──────────────────────────────┐\n");
            printf("│ Please choose an option:     │\n");
            printf("├──────────────────────────────┤\n");
            printf("│ Main Menu:                   │\n");
            printf("│ 1. Check Balance             │\n");
            printf("│ 2. Withdraw Money            │\n");
            printf("│ 3. Deposit Money             │\n");
            printf("│ 4. Exit                      │\n");
            printf("├──────────────────────────────┤\n");
            printf("│ Enter your choice:           │\n");
            printf("└──────────────────────────────┘\n");
            
            scanf("%d", &option);
            
            switch (option) {

                case 1:
                    sleep(2);
                    printf("Your balance is Rs. %d\n", Money);
                    break;

                case 2:

                    sleep(2);
                    printf("Enter the amount to withdraw: ");
                    scanf("%d", &amount);

                    if (amount <= 0) {
                        sleep(2);
                        printf("Invalid amount\n");
                    } 
                    else if (amount > Money) {
                        sleep(2);
                        printf("Insufficient balance\n");
                    } 
                    else {

                        sleep(2);
                        printf("You have withdrawn %d\n", amount);
                        printf("Your current balance is %d", Money-amount );
                    }
                    break;

                case 3:

                    sleep(2);
                    printf("Enter the amount to deposit: ");
                    scanf("%d", &deposit);

                    if (deposit <= 0) {
                        sleep(2);
                        printf("Invalid amount\n");
                    } 
                    else {

                        sleep(2);
                        printf("You have deposited %d\n", deposit);
                        printf("And your current balance is %d", Money + deposit );
                    }
                    break;

                case 4:

                    sleep(2);
                    printf("+-----------------------------------------------------+\n");
                    printf("|                                                     |\n");
                    printf("|    ! Thank you for using our ATM service!           |\n");
                    printf("|                                                     |\n");
                    printf("+-----------------------------------------------------+\n");

                    exit(0);

                default:

                    sleep(2);
                   printf("+-----------------------------------------------+\n");
                   printf("|                                               |\n");
                   printf("|  Invalid option. Please try again.            |\n");
                   printf("|                                               |\n");
                   printf("+-----------------------------------------------+\n");     

        }

    } 

    else {
        sleep(4);

        printf("Invalid PIN. Please try again!\n");
    }

}
