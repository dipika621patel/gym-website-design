#include<iostream>
using namespace std;
class student
{
public:
    int roll_no;
    char  phone_no[15];
    char  a[20];

    void getdata()
    {
       cout<<"enter roll no. "<<endl;
       cin>>roll_no;
       cout<<"enter phone no."<<endl;
       cin>>phone_no;
       cout<<"enter address "<<endl;
       cin>>a;
    }

    void display()
    {
        cout<<"roll no.is "<<roll_no<<endl<<"phone number is "<<phone_no<<endl<<"address is "<<a<<endl;
    }
};
int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"--------------------------------------------------------"<<endl;
    s1.display();
    cout<<endl;
    s2.display();
    return 0;

}
