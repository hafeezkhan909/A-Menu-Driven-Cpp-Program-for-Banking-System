# A-Menu-Driven-Cpp-Program-for-Banking-System

The Menu Driven C++ program for a Banking System, consists of two kinds of Logins:
```bash
1.Admin Login
2.Customer Login
3.Exit 
```
For choosing an option, just type the associated number with the option and hit enter in:
```bash
Enter a number to proceed
```
If you want to enter inside the system as an administrator, it will ask you for the password. 
```bash
Enter password or enter 0 to go back
```
The default set password is 123456.

Once you enter the Admin, you can now create an account for a customer.
```bash
1. Make account
2. go back
```
If you proceed to make an account, the Bank offers to kinds of accounts:
```bash
1.make a current account
2.make a savings account
3.go back
```
For creating the Account, the Admin needs to:
```bash
Enter name of customer
Enter starting balance
Enter account number
```
For a savings account you also need to enter the interest rate for the customer. 

After you make the account you can logout. And now the customer can login using his/her account number.  
```bash
Enter account number or press 0 to go back
```
Once the account number is entered, the customer can view their credentials and details of the account. 

Now they can proceed further to deposit, withdraw and display the amount in their account. 
```bash
Enter 1 to deposit
Enter 2 to withdraw
Enter 3 to diplay balance
Enter 4 to go back
```
The Savings account provides compound interest and withdrawal facilities but no cheque book facilities. The current account provides cheque book facility but no interest. Current account holders should also maintain a minimum balance of 100 AED and if the balance falls below this level a service charge of 20 AED is imposed.  

Contributions are welcome. Feel free to take this repo as a reference and make implementations. Note that the data is lost once the program stops its execution, as a result you can work on integrating a database with timestamps, so that all the information can be stored and observed!    
