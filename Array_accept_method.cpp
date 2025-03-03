/*Program to demonstrate working of Array initialization using accept method*/
#include<iostream>
using namespace std;
class Program
{
    private : int i, a[10]; //declaration of array
    public : void Accept()
    {
        //Initialization of Array element using accept method(using any loop, for, while, do while)
        for(i=0; i<=9; i++)
        {
            cout<<"\n Enter Array Elements : ";
            cin>>a[i];
        }
    }
    public : void Display()
    {
        cout<<"\n Array elements entered by the user are : ";
        for(i=0; i<=9; i++)
        {
            cout<<"\t"<<a[i];
        }
    }
};
int main()
{
    Program obj;
    obj.Accept();
    obj.Display();
    return 0;
}