#include <iostream>
using namespace std;



int main(){  ///starting point of my program
   // return 0;
    int arr[] = {1,0,1,2,3,4,6,2,3};  ///either give all elements of array or size

    int n=sizeof(arr)/sizeof(arr[2]);   ///size of a element * no of elements/size of a element

    int x=2;

   ///   int count =0;
    bool flag = false;   ///false means value is not found
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;   ///value is found
            cout << i << " ";
            ///count++;
        }
    }

   if(flag==false)   ///count ==0;
    cout << -1 << endl;  ///value is not present




}



