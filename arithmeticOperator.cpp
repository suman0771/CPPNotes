#include <iostream>
#include<string>

using namespace std;
int main()
{
	int x=8;
	int y=9;
	float z=9
	int sum=x+y;
	cout<<sum;

	int sub = x-y;
	cout<<sub;

	int mul=x*y;
	cout<<mul;

	int div= x/y; //0 as ans will be 0.... so prints int 
	cout<<div;

	int div1=x/z;  //float result
	cout<<div1;

	int mod =x%y; //remainder of a division x/y
	cout<<mod;
	//cannot use float for module

	x +=2;
	cout<<x;

	x++;
	cout<<x; ///add 1 to x

	x--;
	cout<<x;   //remove 1 from x

}

/*
Order of operations:

B
E
D
M
A
S

*/

/*
Arthmetic Operators

+
-
*
/
%
++
--

*/
