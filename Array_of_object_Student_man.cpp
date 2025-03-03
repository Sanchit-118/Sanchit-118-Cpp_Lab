/*Write a program 
Create a class with name Student_Management_System
Store Student Data from Roll no. 1 to 10
Data includes (Name, Roll no, Percentage)
Display All Data in reverse order using Array of Object.
*/

#include<iostream>
using namespace std;
class Student_Management_System
{
    private : string name; int roll_no; float percentage;
    public : Student_Management_System(string N, int R, float P)
    {
        name = N;
        roll_no = R;
        percentage = P;
    }
    public : void Display()
    {
        cout<<"\n Roll No. = "<<roll_no<<"\t"<<"Name = "<<name<<"\t"<<"Percentage = "<<percentage;
    }
};
int main()
{
    Student_Management_System obj[10] = {{"A",1,99},{"B",2,82},{"C",3,88},{"D",4,63},{"E",5,75},{"F",6,79},{"G",7,71},
    {"H",8,91},{"I",9,80},{"J",10,95}};
    int i;
    for (i=9; i>=0; i--)
    {
        obj[i].Display();     //calling of Display function with Array of objects inside the loop
    }
}