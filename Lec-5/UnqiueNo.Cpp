
#include <iostream>
using namespace std;


int main(){

     int n;
     cin>>n;   ///how many no will be there

   //  int xor1=0;  ///initial value of xor is 0;
      int xor1;           ///garbage value
     for(int i=1;i<=n;i++){
        int x;
        cin>>x;

        if(i==1){
            xor1=x;
        }
        else
              xor1 = (xor1 ^x);
     }

     cout << xor1 << endl;
}


