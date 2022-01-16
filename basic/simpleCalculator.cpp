#include <iostream>
#include<string>

using namespace std;
int main()
{
	int num1, num2;
	cout<<"Enter a Number: ";
	cin>>num1;
	cin.clear();
	cin.ignore(1000,'\n');
	cout<<"Enter a 2nd Number: ";
	cin>>num2;
	int sum = num1+num2;
	cout<<"The Sum is "<<sum;
	int sub = num1-num2;
	cout<<"The Subtraction is "<<sum;
	int div = num1/num2;
	cout<<"The Division is "<<sum;
	int multi = num1*num2;
	cout<<"The Multiply is "<<sum;
	int mod = num1%num2;
	cout<<"The Remainder is "<<sum;
	
	
}
