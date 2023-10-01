#include<iostream>
using namespace std;
void discount_price(int red,int white,int tulip);

main()
{ 
int red;
int white;
int tulip;

cout<<"Red Rose: ";
cin>>red;
cout<<"White Rose: ";
cin>>white;
cout<<"Tulips: ";
cin>>tulip;
 discount_price(red,white,tulip);
}
void discount_price(int red,int white,int tulip)
{float total_price;
float discount;
total_price=(red*2.00)+(white*4.10)+(tulip*2.50);
cout<<"Original Price: $"<<total_price<<endl;
discount=total_price-(0.20*total_price);
if(total_price> 200)
{cout<<"Price after Discount: $"<<discount<<endl;} 
else if(total_price<200)
{cout<<"No Discount applied.";}
}





