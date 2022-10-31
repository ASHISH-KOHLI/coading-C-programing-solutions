/*

number pattern 1

Pattern for N = 4
1
23
345
4567

*/





#include<iostream>
using namespace std;


int main(){

  int N;
    cin>>N;
    int i,j,k;
    for(i=1;i<=N;i++) {
        j=i;
          for(k=1;k<=i;k++){
              cout<<j++;
          }
        cout<<endl;
    }

}
