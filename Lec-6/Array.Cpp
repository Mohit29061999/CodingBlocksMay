#include <iostream>
using namespace std;


int main(){
    //int arr[] = {1,2,3,4,5};  ///either give all elements of array or size

   /*  int arr[10];     ///right now array will have garbage value
    for(int i=0;i<10;i++){
        arr[1]=i+1;    ///giving value to array
    }

    ///arr[i]: assume that we are taking ith varible
    for(int i=0;i<10;i++)
        cout << arr[i] << " "; */

      /*  int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<n;i++)
            cout << arr[i] << " "; */


        int arr[10]={0};  ///rest all are 0 only if you provide at least one element
        for(int i=1;i<10;i++)
            cout << arr[i] << " ";



}
