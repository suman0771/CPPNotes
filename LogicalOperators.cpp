#include <iostream>
#include<string>

using namespace std;
int main()
{
	bool x = !(1<5);
	bool y = true && false;  //false

	bool test = !(false && true); //true

	bool log = (!false && !true); //

	cout<<x<<y<<test<<log;
 

}
/*

!  Not operator -> reverse it 
&& And operator -> both true then true else false 
|| Or operator  -> both false then false else true

*/