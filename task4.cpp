#include<iostream>
using namespace std;
void check_speed(int speed);
void check_speed1(int speed);
main()
{ 
int speed;
cout<<"Speed: ";
cin>>speed;
if(speed>100)
{check_speed(speed);}
if(speed<100)
{check_speed1(speed);}
}
void check_speed(int speed)
{cout<<"Halt... YOU WILL BE CHALLENGED!!!";}
void check_speed1(int speed)
{cout<<"Perfect! You're going good.";}

