#include<iostream>
using namespace std;
void fuel_2(float distance);
void fuel_needed(float distance);
main()
{ float distance,fuel;
cout<<"Enter the distance: ";
  cin>>distance;
  fuel=distance*10; 
if(fuel>100)
{fuel_needed(distance);}
if(fuel<100)
{fuel_2(distance);
}
}
void fuel_needed(float distance)
{
cout<<"Fuel needed: "<<distance*10; 
}
void fuel_2(float distance)
{cout<<"Fuel needed: 100";}
