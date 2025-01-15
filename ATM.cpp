#include<iostream>
using namespace std;
class info
{
    int balance=10000,o,withdraw,deposit;
    int id;
    public:
    void get()
    {
        cout<<endl<<"Enter the ID :";
        cin>>id;
        cout<<endl<<balance;

        cout<<endl<<"Select One Option";
        switch(o)
        {
            case 1:
            cout<<endl<<"Check Balance"<<balance;
            break;

            case 2:
            cout<<endl<<"Withdraw Money";
            if(balance>=withdraw)
            {
                balance=balance-withdraw;
                cout<<endl<<id<<endl<<balance;
            }
            else
            cout<<endl<<"Enter sufficient amount"<<balance;
            break;

            case 3:
            cout<<endl<<"Deposit Money";
            if(deposit>0)
            {
                deposit=balance+deposit;
                cout<<endl<<id<<endl<<balance;
            }
            break;
        }


    }
    
};
int main()
{
    info i;
    i.get();
    return 0;
}