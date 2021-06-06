///problem link: https://hack.codingblocks.com/app/contests/2340/77/problem


#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	///run a loop to check if number i is prime or not
	for(int i=2;i<=n;i++){
		///check if i is prime or not

		bool isPrime=true;  ///isprime will tell if i is prime or not
		                      ///true means prime and false means not prime

		for(int j=2;j<=i-1;j++){  ///check if i has any divisor between 2 to i-1
			if(i%j==0){
				isPrime = false;  //not prime
				break;  ///optional
			}
		/*	else{
				cout << i << " "; ///prime no
			} */

		}

	    if(isPrime ==true){
			cout << i << endl;
		}








	}
	return 0;
}
