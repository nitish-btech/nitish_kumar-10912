#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000, withdraw, deposit;

    printf("===== ATM MACHINE =====\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("❌ Incorrect PIN. Access Denied.\n");
        return 0;
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("💰 Your Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);

                if (withdraw <= balance && withdraw > 0) {
                    balance -= withdraw;
                    printf("✅ Please collect your cash.\n");
                    printf("Remaining Balance: %.2f\n", balance);
                } else {
                    printf("❌ Insufficient Balance or Invalid Amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);

                if (deposit > 0) {
                    balance += deposit;
                    printf("✅ Amount Deposited Successfully.\n");
                    printf("Updated Balance: %.2f\n", balance);
                } else {
                    printf("❌ Invalid Deposit Amount.\n");
                }
                break;

            case 4:
                printf("🙏 Thank you for using ATM. Visit Again!\n");
                break;

            default:
                printf("❌ Invalid Choice. Try Again.\n");
        }
    } while (choice != 4);

    return 0;
}
