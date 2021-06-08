
#include <iostream>
using namespace std;


int main(){

    int x=-5;  ///it will be stored as 2's complement

    for(int i=31;i>=0;i--){   ///find all bits
        int y=(1<<i) ;               ///generate a no with ith bit set and rest unset(0)

        ///check if ith bit is set or not

       // cout << (x&y) << endl;  ///this will not work

        if(x&y){    ///non-zero value is true by default and 0 is false
            cout <<  1 ;
        }
        else
            cout << 0;

    }
}

