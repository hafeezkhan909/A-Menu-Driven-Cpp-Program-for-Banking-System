//Mohammed Abdul Hafeez Khan
#include <stdio.h>
#include <string>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class account
{
    private:
       string Cust_name;
       int account_number;
       string account_type;
       
    public:
       
        /*account(string name,int no,string type)
        {
            Cust_name=name;
            account_number=no;
            account_type=type;
            
        }*/
        
        string getname()
        {
            return Cust_name;
        }
        void setname(string a)
        {
            Cust_name =a;
        }
        void settype(string a)
        {
            account_type=a;
        }
        void settno(int a)
        {
            account_number=a;
        }
        string gettype()
        {
            return account_type;
        }
        int getno()
        {
            return account_number;
        }

};

class savings : public account
{
    private:
        double balance=0;
        double intrest;
    public:
    
    void set(string name,int no, double balance,double intrest, string type="savings")
    {
        this->balance = balance;
       setname(name);
       settno(no);
       settype(type);
       this->intrest=intrest;
    }
    double getbalance()
    {
        return balance;
    }
    void setbalance(double x)
    {
        balance = x;
    }
    double getintrest()
    {
        return intrest;
    }
    
    void display()
    {
        string temp;
        cout<<"\n Name of customer is\n"<<getname();
        cout<<"\n Account number of customer is \n"<<getno();
        cout<<"\n Type of Account:\n"<<gettype();
        cout<<"\n Balance of customer is \n"<<getbalance();
        cout<<"\n enter 1 to continue\n";
        cin>>temp;
    }
    
    void deposit(double amt)
    {
        amt = getbalance()+amt;
        setbalance(amt);
        cout<<"\nYour Account has been sucessfully updated\n";
    }
    
    void intrestcalc(int period, int n)
    {
        double temp = (1+getintrest()/n);
        balance = balance*pow(temp,(period*n));
    }
    
    void settintrest(double x)
    {
        intrest=x;
    }
    
    void widtdraw(double amt)
    {
        double bal = getbalance();
        if(bal-amt>=0)
        {
            setbalance(bal-amt);
        }
        else
        {
            cout<<"\n Insufficient balance, please enter a different amount\n";
        }
        display();
    }
        
};

class current : public account
{
    private:
    double balance = 0;
    public:
     void set(string name,int no, double balance, string type="current")
    {
        this->balance = balance;
       setname(name);
       settno(no);
       settype(type);
    }
    double getbalance()
    {
        return balance;
    }
    void setbalance(double x)
    {
        balance = x;
    }
    void display()
    {
        string temp;
        cout<<"\n Name of customer is\n"<<getname();
        cout<<"\n Account number of customer is \n"<<getno();
        cout<<"\n Type of Account:\n"<<gettype();
        cout<<"\n Balance of customer is \n"<<getbalance();
        cout<<"\n Press enter to continue";
        cin>>temp;
    }
    
    void deposit(double amt)
    {
        amt = getbalance()+amt;
        setbalance(amt);
        cout<<"\nYour Account has been sucessfully updated\n";
    }
    
    void widtdraw(double amt)
    {
        double bal = getbalance();
        if(bal-amt>=0)
        {
            
            if(getbalance()<100||getbalance()-amt<100)
            {
                amt = amt+20;
                if(bal-amt>=0)
                {
                    setbalance(bal-amt);
                }
                else
                {
                    cout<<"\n service charge will give negative balance, request cannot be processed";
                }
            }
            else
            {
                setbalance(bal-amt);
                
            }
        }
        else
        {
            cout<<"\n Insufficient balance, please enter a different amount\n";
        }
        display();
    }
};



int main()
{
    int a[30];
    int counts=0,countc=0;
    int menuflag1 = 0,menuflag2=0, menuflag3=0;
    int menusubflag2=0;
    int choice1,choice2;
    int transition=0;
    int password, password1=123456;
    double bal1,int1;
    string name1;
    int accno;
    int index;
    int typeno;
    int amount;
   

   current curr_arr[20];
    savings sav_arr[20];
 
  
  menu1:
    do
    {
        cout << "\033[2J\033[1;1H";
        menuflag1=0;
        cout<<"1.Admin login\n";
        cout<<"2.Customer Login\n";
        cout<<"3.Exit\n";
        cout<<"Enter a number to proceed \n";
        cin>>choice1;
        switch(choice1)
        {
            case 1:
            menuflag1 =1;
            transition =2;
            goto menu2;
            break;
            case 2:
            menuflag1=1;
            transition=3;
            goto menu3;
            break;
            case 3:
            exit(0);
            default:
            cout<<"Invalid input pls enter again\n";
            menuflag1=0;
            transition=0;
            break;
            
        }
    }while(menuflag1==0);
    
  

    menu2:
    do
    {
        menuflag2=0;
        cout << "\033[2J\033[1;1H";
        cout<<"\nEnter password or enter 0 to go back";
       
        cin>>password;
        if(password!=password1)
        {
            cout<<"incorrect password enter again\n";
            continue;
            
        }
        else if(password==0)
        {
            transition = 1;
            goto menu1;
            
        }
        menu2sub1:
        cout << "\033[2J\033[1;1H";
        cout<<"1.make account\n";
        cout<<"2.go back\n";
        cin>>choice2;
        
        switch(choice2)
        {
            
            case 1:
            cout << "\033[2J\033[1;1H";
            cout<<"1.make a current account\n";
            cout<<"2.make a savings account\n";
            cout<<"3.go back\n";
            cin>>choice1;
            cout << "\033[2J\033[1;1H";
            if(choice1 == 1)
           {
                cout << "\033[2J\033[1;1H";
                cout<<"Enter name of customer\n";
                cin>>name1;
                cout<<"\nEnter starting balance\n";
                cin>>bal1;
                cout<<"Enter account number\n";
                cin>>accno;
                curr_arr[countc].set(name1,accno,bal1);
                curr_arr[countc].display();
                cout<<"Account created ";
                countc++;
                goto menu2sub1;
           }
            else if(choice1==2)
            {
               
                cout<<"Enter name of customer\n";
                cin>>name1;
                cout<<"\nEnter starting balance\n";
                cin>>bal1;
                cout<<"\nEnter account number\n";
                cin>>accno;
                cout<<"\nEnter intrest\n";
                cin>>int1;
                sav_arr[counts].set(name1,accno,bal1,int1);
                sav_arr[counts].display();
                counts++;
                goto menu2sub1;
                break;
                
                case 3:
                goto menu2sub1;
                break;
            }
            else
            {
                cout<<"wrong value";
                goto menu2sub1;
            }   
            break;
      
            
            case 2:
            goto menu1;
            
            default:
            cout<<"wrong value";
            break;
            
            
        }
        
    }while(menuflag2==0);
    
    
    
    
    
    
    
    
    menu3:
    do{
        menuflag3 =0;
        menuflag2=0;
        
        cout << "\033[2J\033[1;1H";
        cout<<"Enter account number or press 0 to go back\n";
        cin>>accno;
        if(accno==0)
        {
            goto menu1;
        }
        
        for(int i=0;i<counts;i++)
        {
            if(accno==sav_arr[i].getno())
            {
                menuflag2=1;
                index =i;
                typeno=0;
                break;
            }
        }
        for(int i=0;i<countc;i++)
        {
            if(accno==curr_arr[i].getno())
            {
                menuflag2=1;
                index=i;
                typeno=1;
                break;
            }
        }
        if(menuflag2==0)
        {
            cout<<"\nAccount not found try again\n Press 1 to continue";
            string temper;
            cin>>temper;
            goto menu3;
        }
        if(menuflag2==1&&typeno==0)
        {
            menu3sub11:
            cout << "\033[2J\033[1;1H";
            cout<<"Hello customer, your user details are\n";
            sav_arr[index].display();
            menu3sub1:
            cout << "\033[2J\033[1;1H";
            cout<<"\nEnter 1 to deposit";
            cout<<"\nEnter 2 to withdraw";
            cout<<"\nenter 3 to calculate intrest";
            cout<<"\nenter 4 to display balance";
            cout<<"\nenter 5 to go back\n";
            cin>>choice1;
            switch(choice1)
            {
                case 1:
                cout<< "\033[2J\033[1;1H";
                cout<<"\n enter amout to deposit";
                cin>>amount;
                sav_arr[index].deposit(amount);
                sav_arr[index].display();
               
                goto menu3sub1;
                break;
                case 2:
                cout<< "\033[2J\033[1;1H";
                cout<<"\n enter amount to widthdraw\n";
                cin>>amount;
                sav_arr[index].widtdraw(amount);
                goto menu3sub1;
                break;
                
                case 3:
                cout<< "\033[2J\033[1;1H";
                cout<<"Enter time period in years";
                cin>>amount;
                cout<<"enter no of times intrest is calculated per year";
                cin>>bal1;
                cout<<"Enter intrest rate";
                cin>>int1;
                sav_arr[index].settintrest(int1/100);
                sav_arr[index].intrestcalc(amount,bal1);
                sav_arr[index].display();
                goto menu3sub1;
                break;
                
                case 4:
                cout<< "\033[2J\033[1;1H";
                sav_arr[index].display();
                goto menu3sub1;
                break;
                
                case 5:
                goto menu3;
                
                default:
                cout<<"\n wrong value entered";
                goto menu3sub1;
                break;
                
                
            }
        }
        
        else if(menuflag2==1&&typeno==1)
        {
            menu3sub22:
            cout << "\033[2J\033[1;1H";
            cout<<"Hello customer, your user details are\n";
            curr_arr[index].display();
            menu3sub2:
            cout << "\033[2J\033[1;1H";
            cout<<"\nEnter 1 to deposit";
            cout<<"\nEnter 2 to withdraw";
            cout<<"\nenter 3 to display balance";
            cout<<"\nenter 4 to go back\n";
            cin>>choice1;
            switch(choice1)
            {
                case 1:
                cout<< "\033[2J\033[1;1H";
                cout<<"\n enter amout to deposit";
                cin>>amount;
                curr_arr[index].deposit(amount);
                curr_arr[index].display();
               
                goto menu3sub2;
                break;
                case 2:
                cout<< "\033[2J\033[1;1H";
                cout<<"\n enter amount to widthdraw\n";
                cin>>amount;
                curr_arr[index].widtdraw(amount);
                goto menu3sub2;
                break;
                
                
                
                case 3:
                cout<< "\033[2J\033[1;1H";
                curr_arr[index].display();
                goto menu3sub2;
                break;
                
                case 4:
                goto menu3;
                
                default:
                cout<<"\n wrong value entered";
                goto menu3sub2;
                break;
                
                
            }
        }
        
        
        
    }while(menuflag3==0);
    
   return 0;
}
