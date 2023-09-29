# include <iostream>
void flowerShop(int redRose, int whiteRose, int tulip);
using namespace std;
main ()
{
int roses;
int white_roses;
int tulips;
cout<<"Red Rose: ";
cin>>roses;
cout<<"White Rose: ";
cin>>white_roses;
cout<<"Tulips: ";
cin>>tulips;
flowerShop(roses,white_roses,tulips);
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
float rosesp;
float white_rosesp;
float tulipsp;
float total;
float discount;
float finalPrice;
rosesp=2.00*redRose;
white_rosesp=4.10*whiteRose;
tulipsp=2.50*tulip;
total=rosesp+white_rosesp+tulipsp;
if(total>200)
{
discount=(total/100)*20;
finalPrice=total-discount;
cout<<"Original Price: $"<<total<<endl;
cout<<"Price after Discount: $"<<finalPrice;
}
if (total<=200)
{
cout<<"Original Price: $"<<total<<endl;
cout<<"No discount applied.";
}


}