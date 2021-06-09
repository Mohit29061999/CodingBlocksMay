#include <iostream>
using namespace std;



int main(){
    int arr[]={1,4,6,9,10,12};

    int s=0;
    int e=(sizeof(arr)/sizeof(arr[0]))-1;  ///initally we have entire array and 0- based indexing
    int x=1;
    while(s<=e){
        ///find th value
        int mid = (s+e)/2;  ///middle index
      //   int mid = s+ (e-s)/2;  ///for large value

        if(arr[mid]==x){
            cout << mid+1;
            return 0;
        }

        if(arr[mid]>x){
            ///go to left part
            e=mid-1;
        }
        else{
            ///go to right part
            s=mid+1;
        }

    }


    cout << -1 << endl;   ///when value is not present



}




