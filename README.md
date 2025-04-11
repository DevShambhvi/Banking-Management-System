# Banking-Management-System
This project is a simple Banking System implemented in C++. It simulates basic banking operations such as displaying account details, depositing money, withdrawing money, and checking the account balance. The program interacts with the user through a menu-driven interface, allowing the user to perform various operations on their bank account.
Key Components:

    Class Definition (Bank):

        Private Members:

            holdername: Stores the name of the account holder.

            accountNumber: Stores the account number of the user.

            balance: Stores the current balance of the user's bank account.

        Public Methods:

            Constructor: Initializes the bank account with the holder's name, account number, and an initial balance.

            display(): Displays the account details, including account holder name, account number, and current balance.

            deposit(): Allows the user to deposit money into their account, with validation that the amount is positive.

            withdraw(): Allows the user to withdraw money from their account, ensuring the withdrawal does not exceed the available balance, and the amount is positive.

            checkBalance(): Returns the current balance of the account.

    Main Program (main()):

        User Input: Prompts the user to enter their name, account number, and initial balance.

        Bank Object: A Bank object (myAccount) is created using the details provided by the user.

        Menu-Driven Operations: The program repeatedly presents a menu with choices for the user to:

            Display account details.

            Deposit money.

            Withdraw money.

            Check the balance.

            Exit the program.

    The program continues running until the user selects the option to exit.


