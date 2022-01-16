#include <iostream>
#include<string>

using namespace std;
int main()
{
	bool x = !(1<5);  //false
	bool y = true && false;  //false

	bool test = !(false && true); //true

	bool log = (!false && !true); //false

	// !|| -> &&
	// !&& -> ||

	int p=0, q=2;
	bool z = (p<q) || (p == q); //true 
 

}
/*

!  Not operator -> reverse it 
&& And operator -> both true then true else false 
|| Or operator  -> both false then false else true

*/