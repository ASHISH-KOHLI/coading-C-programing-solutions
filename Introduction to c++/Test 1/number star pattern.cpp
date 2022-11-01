/*

number star pattern

1234554321
1234**4321
123****321
12******21
1********1

*/
#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n;
    cin>>n;
int i, j, k, m;
 for(i=n; i>=1; i--)
 {
  for(j=1; j<=i; j++)
   cout << j;
  for(k=i; k<n; k++)
   cout << "**";
  for(m=i; m>=1; m--)
   cout << m;
  cout << "\n";
 }
}


