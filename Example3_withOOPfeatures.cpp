/* Program to deomnstrate working of function with no return type and no parameter */
#include<iostream>   //header file
using namespace std;    //OOP basic
class Program       //class Name        {Class is basically a structure in which functions can be declared, whereas struct is for Datatypes}
{
    public : void Message()   //public, private, protected -> Access specifier
    {
        cout<<"Hi";
    }
};
int main()
{
    Program obj;   //class Name and object name (random)    
    obj.Message();  //using object name and function means OPP programming
    return 0;
}