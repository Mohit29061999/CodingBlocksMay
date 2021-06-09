#include <iostream>
using namespace std;



int main(){  ///starting point of my program
   // return 0;
    int arr[] = {1,4,6,8,12,2,3};  ///either give all elements of array or size

    int n=sizeof(arr)/sizeof(arr[2]);   ///size of a element * no of elements/size of a element

     int i=0;
     int x=10;
     for(;i<n;i++){
        if(arr[i]==x){
            cout << i << endl;
            return 0;      ///terminate your  program(for main) for a normal function
                            ///terminate means to end your function
           /// break;
        }
     }


    ///break will take us here
     ///check if value was present or not
    /// if(i==n)
        cout << -1 << endl;  ///-1 means value doesn't exist



}

///return 0 will take here

