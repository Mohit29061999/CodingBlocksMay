#include <iostream>
using namespace std;


int main(){

  /*  for(int i=1;i<=10;i++){
        if(i==7)
            continue;  ///go to next iteration

            cout << i << " ";

    } */

   /* for(int i=0;i<=10;i++){
        if(i==7)
            break;
        cout << i << " ";
    } */



    ///break will take your here

    for(int i=0;i<10;i++){

         //repeated task for i loop
        for(int j=0;j<10;j++){
             cout << i << " " << j << endl;
            if(j==4)
                continue;  ///it will break the innermost loop


        }

    }
}



