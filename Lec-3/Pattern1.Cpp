#include <iostream>
using namespace std;


int main(){
      int n;
      cin>>n;   ///how many rows to print


      for(int i=1;i<=n;i++){  ///do something for n rows
            ///in every row print some space,print increasing and then dec no
            ///space- n-i space
            for(int j=1;j<=n-i;j++)
                      cout << ' ';

            int no =i;  ///outside for loop
            ///print i incresing no
            for(int j=1;j<=i;j++){
                cout << no ;

                no++;
            }

            ///dec no will start from one less than where increasing no are ending
            ///loop will stop at one no ahead
            no = no-2;
            for(int j=1;j<=i-1;j++){
                cout << no ;
                no--;  ///dec order
            }

            cout << endl;  ///print new row on a new line



      }
}




