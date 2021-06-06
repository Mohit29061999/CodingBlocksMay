///problem link: https://hack.codingblocks.com/app/contests/2340/232/problem


#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	cout << 1 << endl;

	///print n-1 rows now
	for(int i=1;i<=n-1;i++){

		  ///in ith row print i+1 no
		  for(int j=1;j<=i+1;j++){
			  ///if it is first no or last no then print i
			  if(j==1 || j==i+1)
			  cout << i;
			  else
			  cout << 0;
		  }
		  cout << endl;
	}

	return 0;
}
