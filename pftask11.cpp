#include<iostream>
using namespace std;
void payable_amount(string day,int number);
main()
{int number;
 string day;

cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>number;
payable_amount(day,number);
}


void payable_amount(string day,int amount){
if (day== "Sunday"){
	amount=amount*90/100;
	}
cout<<"Payable Amount: $"<<amount;
}
