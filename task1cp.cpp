# include <iostream>
void compare (int num1,int num2);
using namespace std;
main ()
{
int num1;
int num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
compare (num1,num2);
}
void compare (int num1, int num2)
{
if (num1==num2)
{
cout<<"true";
}
if (num1!=num2)
{
cout<<"false";
}
}