# Banking Menu
## Objective: 
To create a C++ Console application that utilizes selection control to create
the ‘Menu Driven Banking’ application.

## General Specification: 
Create a menu-driven application that supports the following
menu options:
### A. Deposit, B. Withdrawal, C. Show Balance, and Q. Quit. 
The program should continue to process transactions until Quit is selected. 
Your program should begin execution with a zero balance. This program tracks the balance of a single
customer.

When your program first starts it should prompt the user to enter the Customer Name and
an Account Number. Both the name and account number variables should be of type
string.

## Required Features:
Deposit – Adds an amount to the running balance;
Should reject zero or negative amounts;

Withdrawal - Subtracts an amount from the running balance;
Should reject zero or negative amounts. Should also reject
withdrawal transactions that exceed balance;

Balance - Clearly displays the Customer Name, the last four digits of the
account number (XXXX-4567), and the account balance.

Quit - Terminates the program;
