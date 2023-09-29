# include <iostream>
void longestTime (int hrs, int min);
using namespace std;
main ()
{
int min;
int hrs;
cout<<"Enter the number of hours: ";
cin>>hrs;
cout<<"Enter the number of minutes: ";
cin>>min;
longestTime (hrs,min);
}
void longestTime (int hrs, int min)
{
int converthrs;
converthrs=hrs*60;
if(converthrs<min)
{
cout<<min;
}
if (converthrs>min)
{
cout<<hrs;
}
}