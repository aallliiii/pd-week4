# include <iostream>
void pet (int holidays);
using namespace std;
main ()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}
void pet (int holidays)
{
int time;
int workingDays;
int time1;
int hrs;
int mins;
workingDays=365-holidays;
time=(workingDays*63)+(holidays*127);
if (time<30000)
{
time1=30000-time;
hrs=time1/60;
mins=time1%60;
cout<<"Tom sleeps well"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes less for play";
}
if (time>30000)
{
time1=time-30000;
hrs=time1/60;
mins=time1%60;
cout<<"Tom will run away"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes for play";
}
}