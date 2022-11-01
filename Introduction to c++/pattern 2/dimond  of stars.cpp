/*

diamond of stars

  *
 ***
*****
 ***
  *

*/
#include<iostream>
using namespace std;


int main() {


      int n; // declaring variables..
     cin>>n;
 for (int i=0; i<=n/2; i++){
            for (int j=n/2; j>=i+1; j--)
              cout<<" ";
            for (int j=0; j<=i*2; j++ )
              cout<<"*" ;
        cout<<endl;
     }
   for(int i=n/2;i>=0;i--){
             for(int k=n/2;k>=i;k--)
              cout<<" ";
             for(int j=0;j<i*2-1;j++)
               cout<<"*"  ;
             cout<<endl;
     }
}
