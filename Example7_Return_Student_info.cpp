/* Program to create a class with name Student_Data with function name,
Welcome_Message(), this function on execution will display a message with para
Welcom to MIET Jammu. 
Now we will add 1 more function with name Validate_RegNo(), this function will accept student name
and registration number from student and validate it.
(valid RegNo's are from 61 to 120)*/

#include<iostream>   
using namespace std;    
class Student_data      
{
    public : void Welcome_Message()   
    {
        cout<<"Welcome to MIET Jammu."<<endl;
    }
    private : string Name;
    int RegNo;  //can be used throughout the class and if declared inside validate function then only in that fun.
    public : string Validate_RegNo()
    {
        cout<<"Enter your Name : "<<endl;
        cin>>Name;
        cout<<"Enter your Registration Number : "<<endl;
        cin>>RegNo;
        if(RegNo>=61 && RegNo<=120)
        {
            return "True";
        }
        else
        {
            return "False";
        }
        //OR
        //cout<<"Enter your Name"<<endl<<cin>>Name;
    }
};
int main()
{
    Student_data obj;
    obj.Welcome_Message(); 
    string res;     //same datatype variable requried as declared in validate function
    res = obj.Validate_RegNo();     //Also it will print and work iff value is passed in a variable of same datatype.
    if(res=="True")       //value of true and false was stored in res and True or false was not a direct message.
    {
        cout<<"\nLogin Successful";
    }
    else
    {
        cout<<"\nLogin Fail";
    }
    return 0;
}