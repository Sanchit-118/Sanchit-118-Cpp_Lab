 // Function with no return type and no parameters
#include<iostream>
using namespace std;
class program //defining structure in C++ using "class" for declaring functions instead of "struct" used for definiting values.
{
    public : void display() // Function with no return type and no parameters
    {
        cout<<"Hello World";
    }
    public : void fun()
    {
        cout<<"Hi";
    }
}; //Terminator or end statement 
int main()
{
    program obj; //declaring a variable to access the structure/class.
    obj.fun();
    obj.display();
    return 0;
}