///problem link: https://hack.codingblocks.com/app/contests/2340/304/problem

#include<iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;

	////lower case
	if(ch>='a' && ch<='z'){
		///lower case
		cout << 'L' << endl;
	}

	else if(ch>='A' && ch<='Z')
	cout << 'U' << endl;

	else{
		cout << 'I' << endl;
	}


}
