#include<iostream>
using namespace std;
void discount(string name,float price);
main()
{
string name;
float price;
cout<<"Enter the country's name: ";
cin>>name;
cout<<"Enter the ticket price in dollars: $";
cin>>price;
discount(name,price);
}
void discount(string name,float price)
{float final_price;
if(name=="Pakistan")
{final_price=price*0.95;}
else if(name=="India")
{final_price=price*0.8;}
else if(name=="Ireland")
{final_price=price*0.9;}
else if(name=="England")
{final_price=price*0.7;}
else if(name=="Canada")
{final_price=price*0.55;}

cout<<"Final ticket price after discount: $"<<final_price;}

