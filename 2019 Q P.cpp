#include<iostream>
using namespace std;

int main()
{
    string name;
    int password;

    cout<<"Enter your name :";
    cin>>name;

    cout<<"Enter four digit password (from 1000 to 9999) :";
    cin>>password;

    cout<<"Your password is "<<password<<endl;


    if(password <1000 || password >9999)
    {

        for (int i=0; i<2; i++)
        {
        cout<<"Re-enter your password :";
        cin>>password;

        if (password >=1000 && password <=9999)
        {
        cout<<"Hello "<<name<<" Welcome !";
        }
        }
        if (password <1000 || password >9999)
        {
           cout<<"Sorry, Terminate your access!";
        }
    }

    else
    {
        cout<<"Hello "<<name<<" Welcome !";
    }



return 0;
}
