
#include <iostream>
using namespace std;


int main(){

   int x;
   x=5;

   ///refrence are like  constant pointer(not exaclty true)

   //int &y= x///add name y to variable x refrence variable
   int &y;   ///while defining a refrence provide the refrencing variable too
   y=x;
    //int z=10;
    //&y=z;   ///incorrect you cannot change refrence later one
    int z=10;
    y=z;
   y++;
   cout << x << endl;  ///6 will get printed as they both have same address



}





