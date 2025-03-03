/*Program to demonstrate working of array of objects (Method 1)*/
/*Best suited in the case of minimum number of objects or values, but if there are 10 or 20 things of
same type then it is not preferred as this is a disadvantage.*/
#include<iostream>
using namespace std;
class Program            //class declaration
{
    private : int Reg_no; float marks;    //Private member of class
    public : Program(int R, float M)     //Parameterized constructor of class
    {
        Reg_no = R;
        marks = M;
        
    }
    public : void Display()    //Function of class
    {
        cout<<"\n Reg Number = "<<Reg_no<<"\t"<<"Marks = "<<marks;
    }
};
int main()
{
    Program obj[3] = {{101,450}, {102,430}, {103,440}};     //Array of objects with manual initialization
    int i;
    for (i=0; i<3; i++)
    {
        obj[i].Display();     //calling of Display function with Array of objects inside the loop
    }
}