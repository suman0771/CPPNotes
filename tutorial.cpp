#include <iostream>
#include<string>
using namespace std;
int main(){
// 	cout<<"Hello";
// 	std::cout<<"Heloo Suman!"; //here iostream library, then namespace std, then cout
// 	//cout: to print character output

// 	const string name ="Suman";
// 	const int gravity = -9.8;
// 	//const int gravity;     declaration not allowed in cont

// 	int n;
// 	cin>>n;
// 	cout<<n;

// //if we have unclear input we need to clear that to take our next output

// 	int p,q;
// 	cin>>p;
// 	cin>>q;
// 	cout<<p<<endl;   //if p=h or hello then it show error and not take next input value for q
// 	cout<<q;
// //to check failure in input
// 	cout<<cin.fail();

// 	//to clear failure
// 	cin.clear();
// 	cin.ignore(1000,"\n");


int n, x;
cin>>n;
cout<<n<<endl;
cin.clear();
cin.ignore(1000, '\n'); //single quotation mark
//1000 character will be ignored from invalid input.
cin>>x;
cout<<x;


	return 0;
}