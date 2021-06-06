#include<iostream>
using namespace std;

int main() {
	int sb,db,sn;
  /*	int sb;
	int db;
	int sn; */
	cin>>sb>>db>>sn;

	int mul = 1;
	int ans =0;
	while(sn>0){
		int rem = sn%10;
		ans+=(rem*mul);
		sn=sn/10;
		mul = mul*sb;
	}
//	cout << ans << endl;  ///decimal no for src base

     int final_value=0;
	  mul =1;

	 while(ans>0){
		 int rem = ans%db;
		 final_value+=(rem*mul);
		 mul = mul*10;
		 ans  = ans/db;
	 }

	 cout << final_value  << endl;


	return 0;
}
