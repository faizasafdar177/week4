#include<iostream>
using namespace std;
void inchesToFeet(float measurement);
main()
{  float measurement;
cout<<"Enter the measurement in inches: ";
cin>>measurement;

inchesToFeet(measurement);
      
}
void inchesToFeet(float measurement)
{float inches;
inches=measurement/12;

cout<<"Equivalent in feet: "<<inches;
} 
