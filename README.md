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

Once yuo enter the Admin, you can now create an account for a customer.
```bash
1. Make account
2. go back
```



A Menu Driven Program in C++ for a Banking System, in which there are two kinds of accounts for customers, one called as Savings and other as the Current Account. The Savings account provides compound interest and withdrawal facilities but no cheque book facilities. The current account provides cheque book facility but no interest. Current account holders should also maintain a minimum balance of 100 AED and if the balance falls below this level a service charge of 20 AED is imposed.  

For examples,
- Train a model only on SP500.csv; no embedding
```bash
python main.py --stock_symbol=SP500 --train --input_size=1 --lstm_size=128 --max_epoch=50
```

- Train a model on 100 stocks; with embedding of size 8
```bash
python main.py --stock_count=100 --train --input_size=1 --lstm_size=128 --max_epoch=50 --embed_size=8
```

- Start your Tensorboard
```bash
cd stock-rnn
mkdir logs
tensorboard --logdir ./logs --port 1234 --debug
```

My python environment: 
Python version == 2.7
```
BeautifulSoup==3.2.1
numpy==1.13.1
pandas==0.16.2
scikit-learn==0.16.1
scipy==0.19.1
tensorflow==1.2.1
urllib3==1.8
```
