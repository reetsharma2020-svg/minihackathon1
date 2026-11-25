Project Name: ATM Simulation System
Programming Language: C
Project Type: Mini Hackathon Project
Team name: CODESTORM
Member 1 – REET SHARMA (590033799)
Member 2 – ARNAV MEHROTRA (590032956)
Member 3 – YOSHA PUROHIT (590037091)
College: UPES
Academic Year: 2026–2027
# 🏧 ATM Simulation System Using C

1. Project Overview
The ATM Simulation System is a simple, menu-driven banking application developed using the C programming language.
The main objective of this project is to simulate the basic operations performed by an Automated Teller Machine (ATM). It allows users to check their account balance, deposit money, withdraw money, and exit the application.
This project is designed for beginners to understand the practical implementation of C programming concepts such as functions, loops, conditional statements, switch-case, and variables.
The system provides a simple and interactive interface through which users can perform basic banking transactions.

## 2. Objectives

The main objectives of this project are:
- To understand the working of an ATM system.
- To implement basic banking operations using C.
- To develop a menu-driven program.
- To understand the use of functions and conditional statements.
- To perform deposit and withdrawal operations.
- To validate user input and prevent invalid transactions.
## 3. Features

The ATM Simulation System provides the following features:
### 1. Check Balance
- Displays the user's current account balance.
- Shows the updated balance after transactions.
### 2. Deposit Money
- Allows users to deposit money into their account.
- Accepts the deposit amount from the user.
- Rejects zero and negative amounts.
- Updates the account balance after a successful deposit.

### 3. Withdraw Money
- Allows users to withdraw money from their account.
- Checks whether the entered amount is valid.
- Prevents withdrawal if the entered amount exceeds the available balance.
- Displays the remaining balance after withdrawal.

### 4. Exit
- Allows users to exit the ATM application.
- Displays a thank-you message before terminating the program.
## 4. Technologies Used

| Technology | Purpose |
|---|---|
| C Programming | Main programming language |
| GCC Compiler | Compiling the C program |
| VS Code / Code::Blocks | Writing and executing code |
| GitHub | Storing and sharing project files |

---

## 5. C Programming Concepts Used

The project uses the following fundamental C programming concepts:

| Concept | Application |
|---|---|
| Variables | Store balance, amount, and user choice |
| Data Types | int and float |
| Functions | Perform different ATM operations |
| if-else | Validate deposit and withdrawal amounts |
| switch-case | Handle user menu selections |
| do-while loop | Display the ATM menu repeatedly |
| Arithmetic Operators | Perform addition and subtraction |
| scanf() | Accept user input |
| printf() | Display messages and results |

---

## 6. Project Structure

The project contains the following files:

```text
ATM-Simulation/
│
├── atm.c
│
└── README.md
```

- **atm.c:** Contains the complete C source code of the ATM Simulation System.
- **README.md:** Contains project information, features, instructions, and sample outputs.

---

## 7. How to Run the Project

Follow these steps to execute the ATM Simulation System.

### Step 1: Download the Project

Clone the GitHub repository or download the project files.

```bash
git clone YOUR_REPOSITORY_LINK
```

### Step 2: Open the Project Folder

Navigate to the project directory:

```bash
cd ATM-Simulation
```

### Step 3: Compile the C Program

Use GCC to compile the program:

```bash
gcc atm.c -o atm
```

### Step 4: Run the Program

On Linux or Ubuntu:

```bash
./atm
```

On Windows:

```bash
atm.exe
```

The ATM menu will appear on the screen.

---

## 8. Sample Outputs

### A. Main Menu

```text
================================
       WELCOME TO ATM
================================

--------- ATM MENU ---------

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit

Enter your choice:
```

### B. Check Balance
```text
Enter your choice: 1

Your Current Balance: Rs. 5000.00
### C. Deposit Money
```text
Enter your choice: 2

Enter amount to deposit: Rs. 2000

Money Deposited Successfully!
Updated Balance: Rs. 7000.00
```

### D. Withdraw Money

```text
Enter your choice: 3

Enter amount to withdraw: Rs. 1000

Please Collect Your Cash!
Updated Balance: Rs. 6000.00
```

### E. Insufficient Balance

```text
Enter your choice: 3

Enter amount to withdraw: Rs. 8000

Insufficient Balance!
### F. Invalid Amount
Enter your choice: 2

Enter amount to deposit: Rs. -500

Please enter a valid amount!
### G. Exit

```text
Enter your choice: 4

Thank you for using our ATM!
Have a nice day!

## 9. Explanation of Core Functions

The project is divided into different functions to make the program easier to understand and manage.

### A. checkBalance()

**Purpose:** Displays the current account balance.

**Working:**
1. Receives the current balance as an argument.
2. Displays the balance using printf().
3. Does not modify the account balance.

### B. deposit()

**Purpose:** Adds money to the user's account.

**Working:**
1. Takes the deposit amount from the user.
2. Checks whether the entered amount is greater than zero.
3. If the amount is valid, adds it to the existing balance.
4. Displays a success message.
5. Returns the updated balance.

**Logic:**

```c
balance = balance + amount;
 C. withdraw()
**Purpose:** Allows the user to withdraw money.
**Working:**
1. Takes the withdrawal amount from the user.
2. Checks whether the amount is valid.
3. Checks whether sufficient balance is available.
4. If sufficient balance exists, deducts the amount.
5. Displays the remaining balance.
6. Returns the updated balance.

**Logic:**
```c
balance = balance - amount;
D. main()
**Purpose:** Controls the complete ATM application.
**Working:**
1. Initializes the account balance to Rs. 5000.
2. Displays the ATM menu.
3. Accepts the user's choice.
4. Uses switch-case to call the appropriate function.
5. Repeats the menu using a do-while loop.
6. Terminates when the user selects Exit.
10. Algorithm

1. Start the program.
2. Initialize the account balance to Rs. 5000.
3. Display the ATM menu.
4. Ask the user to enter their choice.
5. Perform the selected operation:
   - Choice 1: Display current balance.
   - Choice 2: Deposit money.
   - Choice 3: Withdraw money.
   - Choice 4: Exit the application.
6. Validate the entered amount.
7. Update the balance after successful transactions.
8. Display the updated balance.
9. Repeat the menu until the user selects Exit.
10. Stop the program.
 11. Limitations
     
The current version of the project has some limitations:
- It uses a fixed initial balance of Rs. 5000.
- It does not connect to a real bank account.
- It does not include PIN authentication.
- Transaction history is not stored.
- Account information is not saved permanently.
- It supports only basic ATM operations.
12. Future Enhancements

The project can be improved by adding the following features:
- ATM PIN verification.
- Change PIN functionality.
- Transaction history.
- Mini statement.
- Daily withdrawal limit.
- Multiple bank accounts.
- File handling to save account information permanently.
These improvements can make the application more realistic and advanced.
13. Conclusion
  
The ATM Simulation System successfully demonstrates the basic working of an Automated Teller Machine using the C programming language.
Through this project, we learned how to implement functions, loops, conditional statements, switch-case, and arithmetic operations in a practical application.
This project helped us understand how basic banking transactions are performed and improved our problem-solving and programming skills.
