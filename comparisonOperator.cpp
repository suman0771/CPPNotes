#include <iostream>
#include<string>

using namespace std;
int main()
{
	bool test = 1 != 1;

	bool test1 = 'a' == 'A'; 

	cout<< test;

	cout<<test1;

	bool com = 'a' < 'B'; //comapares ASCII values
    //         97  <  88  

    //Comparision of strings

    bool st = " hello" == "hello";
    //there are not same as first hello is having space 
     int num1, num2;
     cout<<"Type a number: ";
     cin>>num1>>num2;
     cout<<"These numbers are same: "<< (num1==num2);

}
/*
Comparision Operator gives boolean result 
<
>
<=
>=
!=
==

*/
