/*Program to demonstrate Array Declaration and Direct Array Initialization
using Direct Method*/
//Array Initilization for every single is not a suitable method in case of array for large number of elements
#include<iostream>
using namespace std;
class ArrayProgram
{
    private : int a[5];     //Array declaration
    public : void Display()
    {
        a[0] = 10;   //Initialization of array element at index 0 using Direct method
        a[1] = 5;     //Initialization of array element at index 0 using Direct method
        cout<<"\n Array Element At index 0 is : "<<a[0];
        cout<<"\n Array Element At index 1 is : "<<a[1];
        cout<<"\n Array Element At index 2 is : "<<a[2];  //random or garbage value will be generated as not assigned.
    }
};
int main()
{
    ArrayProgram obj;
    obj.Display();
    return 0;
}