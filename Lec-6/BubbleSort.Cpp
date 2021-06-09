#include <iostream>
using namespace std;



int main(){
    int arr[]={1,0,-1,2,3,10,4};

    int n=sizeof(arr)/sizeof(arr[0]);

    ///repeat something n-1 times
    for(int i=1;i<=n-1;i++){
        ///compare every element to its next element
        ///if current element is greater than next then swap them
         bool swapped = false;  ///no swapping done
        for(int j=0;j<=n-1-i;j++){  ///go till n-2 only  //i<n-1;
            ///compare j with j+1;
            if(arr[j]>arr[j+1]){
                ///swap them
                arr[j]=arr[j]+arr[j+1];   ///x=x+y
                arr[j+1]=arr[j]-arr[j+1];    ///y=x-y
                arr[j]=arr[j]-arr[j+1];       ///x=x-y

                swapped = true;   ///swapping is done

            }
        }

        if(swapped ==false){
            ///already sorted
            break;
        }
    }

    for(int i=0;i<n;i++)
        cout << arr[i] << " ";






}





