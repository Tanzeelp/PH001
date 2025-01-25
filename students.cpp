#include<iostream>
using namespace std;
class student
{
    int roll,marks[3],i,total=0;
    double percentage;
    string name;

    public:

    void getdetail()
    {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student roll no: ";
        cin>>roll;
        cout<<"Enter student marks: ";
        for(i=0;i<3;i++)
        {
            cin>>marks[i];
        }
    }
        void display()
      {
            cout<<"Student name: "<<name<<endl;
            cout<<"Student roll no: "<<roll<<endl;
            for(i=0;i<3;i++)
            {
                cout<<"Student marks: "<<marks[i]<<endl;
            }
            cout<<endl<<"Total marks: "<<total<<endl;
            cout<<endl<<"Percentage: "<<percentage<<endl;

            
        }
        void op()
        {
            for(i=0;i<3;i++)
            {
                total=total+marks[i];
            }     
            percentage=total/3.0;
        }
    
};
int main() 
{
    student s1;
    s1.getdetail();
    s1.op();
    s1.display();
    return 0;
}