
#include <iostream>
using namespace std;

#define x 4   ///another way of defining constant  ///this is not
#define pi 2+3

int main(){

    //int x;
/*
  //const int x;    ///give value while defining only  ///this is stored in memory
   const int x=5;
   // x++;  ///changing value of x so will not work
// x=4;    ///can't change constant

  cout << x+1 << endl; ///this will work as we are not changing the value of x */

  cout << 2*pi*3 << endl;  ///pi will be replaced by 2+3 and not 5
 /// x++;   ///macros are also constant


}



