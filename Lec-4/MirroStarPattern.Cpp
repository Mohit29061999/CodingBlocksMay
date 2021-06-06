///problem link: https://hack.codingblocks.com/app/contests/2340/192/problem


#include<iostream>
using namespace std;


int main() {
	int n;
	cin>>n;

	///printing upper pattern
	int space_value =(n+1)/2-1;
	for(int i=1;i<=(n+1)/2;i++){
		///do something

		///ith row : space first then 2*i-1 *
		///print space
		for(int j=1;j<=space_value;j++)
		cout << "  ";

		///print i star
		for(int j=1;j<=2*i-1;j++)
		cout << "* ";

		space_value--;  ///in next row we have one less space
		cout << endl;
	}

	///print lower pattern
	int star_value = n-2;  ///for first down pattern row, print n-2 star
	for(int i=1;i<=(n/2);i++){
		///print i space
		for(int j=1;j<=i;j++)
		cout << "  ";

		///print star equal to star_value
		for(int j=1;j<=star_value;j++){
			cout << "* ";
		}

		///next row have 2 less star
		star_value-=2;
		cout << endl;

	}


	return 0;
}
