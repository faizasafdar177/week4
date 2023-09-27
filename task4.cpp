#include<iostream>
using namespace std;
void fuel_needed();
main()
{  
fuel_needed();
}
void fuel_needed()
{float distance,fuel_need;
cout<<"Enter the distance: ";
cin>>distance;
fuel_need=distance*10;
cout<<"Fuel needed: "<<fuel_need;
}
