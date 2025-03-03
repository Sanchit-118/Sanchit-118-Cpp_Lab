/*Program to demonstrate the working and execution sequence of constructor*/

#include<iostream>
using namespace std;
class Program
{
    private : int a;
    public : Program()
    {
        a = 5;
        cout<<"\n a = "<<a;
    }
};
int main()
{
    Program obj;
}
