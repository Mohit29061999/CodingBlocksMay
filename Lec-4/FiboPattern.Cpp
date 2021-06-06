///problem link: https://hack.codingblocks.com/app/contests/2340/498/problem

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	int a=0;  ///curr no
	int b=1;   ///next no
	for(int i=1;i<=n;i++){  ///do something for n rows
	    ///in every row print row no
		for(int j=1;j<=i;j++){
			///do something
			cout << a << "  ";  ///printed your current no
			///genrate the next no
			int temp = a;
			a=b;
			b=a+temp;
		}
		cout << endl;
	}
	return 0;
}
