#include<iostream>
using namespace std;
class info
{
    int balance=10000,o,withdraw,deposit;
    int id;
    public:
        void get()
        {
            while(true)
        {
            cout<<endl<<"Enter the ID :";
            cin>>id;
            cout<<endl<<"Balance : "<<balance;
            cout<<endl<<"1 : Check Balance";
            cout<<endl<<"2 : Withdraw Money";
            cout<<endl<<"3 : Deposit Money";
            cout<<endl<<"Select One Option : ";
            cin>>o;
            switch(o)
            {
                case 1:
                cout<<endl<<"Check Balance : "<<balance;
                break;

                case 2:
                cout<<endl<<"Withdraw Money : "<<endl<<"Enter the amount to withdraw : ";
                cin>>withdraw;

                if(balance>=withdraw)
                {
                    balance=balance-withdraw;
                    cout<<endl<<"Balance :"<<balance;
                }
                else
                cout<<endl<<"Enter sufficient amount"<<endl<<"Balance : "<<balance;
                break;

                case 3:
                cout<<endl<<"Deposit Money : ";
                cout<<endl<<"Enter the amount to deposit : ";
                cin>>deposit;
                if(deposit>0)
                {
                    balance=balance+deposit;
                    cout<<endl<<"Balance :"<<balance;
                }
                break;
            }
        }
    }
};
int main()
{
    info i;
    i.get();
    return 0;
}