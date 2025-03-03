/* Write a program to create two classes
1. Class Login_Details,
with functions as :-
a. Validate() accept Login password (default 1234) from user
b. Display() display message on Screen "Welcome to MyAPP

2. Class User_Profile
with function as :-
a. Accept() accept username, email id and name from user
b. Display() will display information entered by the user on screen.
*/

#include<iostream>
using namespace std;
class Login_Details
{
    private : int password;
    public : int Validate()
    {
        cout<<"Enter your login Password : ";
        cin>>password;
        if(password == 1234)
        {
            Display();
            return 1;
        }
        else
        {
            cout<<"    Enter the correct Password !!!";
            return 0;
        }
    }
    public : void Display()
    {
        cout<<"\n  Welcome to MyAPP\n\n";
    }
};
class User_Profile
{
    private : string user, email, name;
    public : void Accept()
    {
        cout<<"Enter your Name : ";
        cin>>name;
        cout<<"Enter your username : ";
        cin>>user;
        cout<<"Enter your Enail ID : ";
        cin>>email;
        Display();
    }
    public : void Display()
    {
        cout<<"\n\n Name : "<<name;
        cout<<"\n Username : "<<user;
        cout<<"\n Email ID : "<<email;
    }
};
int main()
{
    int a;
    Login_Details obj1;
    User_Profile obj2;
    a = obj1.Validate();
    if(a == 1)
    {
        obj2.Accept();
    }
    return 0;
}