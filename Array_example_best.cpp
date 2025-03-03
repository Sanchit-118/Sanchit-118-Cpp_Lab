/*Program to demonstrate Array Declaration and Direct Array Initialization
using Direct Method*/
//This is the best way to use array in case of multiple elements
#include<iostream>
using namespace std;
class ArrayProgram
{
    private : int a[5];     //Array declaration
    int b[5] = {1,2,3,4,5};   //Direct Initialization of multiple array elements at declaration point.
    public : void Display()
    {
        a[0] = 10;   //Initialization of array element at index 0 using Direct method
        a[1] = 5;     //Initialization of array element at index 0 using Direct method
        cout<<"\n Array Element At index 0 is : "<<a[0];
        cout<<"\n Array Element At index 1 is : "<<a[1];
        cout<<"\n Enter Array element : ";
        cin>>a[2];  
        cout<<"\n Array Element entered by user at index 2 is : "<<a[2];
        cout<<"\n Array Element of array 'b' at index 0 is : "<<b[0];
    }
};
int main()
{
    ArrayProgram obj;
    obj.Display();
    return 0;
}