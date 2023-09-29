# include <iostream>
# include <string>
void discount (std::string country,float ticketPrice);
using namespace std;
main ()
{
string country;
float ticketPrice;
while(true)
{
cout<<"Enter the country's name: ";
cin>>country;
cout<<"Enter the ticket price in dollars: $";
cin>>ticketPrice;
discount (country,ticketPrice);
}
}
void discount (std::string country,float ticketPrice)
{
float discountt;
float finalp;
if (country=="Pakistan")
{
discountt=(ticketPrice/100)*5;
finalp=ticketPrice-discountt;
}
if (country=="Ireland")
{
discountt=(ticketPrice/100)*10;
finalp=ticketPrice-discountt;
}
if (country=="India")
{
discountt=(ticketPrice/100)*20;
finalp=ticketPrice-discountt;
}
if (country=="England")
{
discountt=(ticketPrice/100)*30;
finalp=ticketPrice-discountt;
}
if (country=="Canada")
{
discountt=(ticketPrice/100)*45;
finalp=ticketPrice-discountt;
}
cout<<"Final ticket price after discount: $"<<finalp<<endl;
}