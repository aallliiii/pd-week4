# include <iostream>
# include <string>
void reverse (std::string value);
using namespace std;
main ()
{
string value;
cout<<"Enter 'true' or 'false': ";
cin>>value;
reverse(value);
}
void reverse (std::string value)
{
if (value=="true")
{
cout<<"false";
}
if (value=="false")
{
cout<<"true";
}
}