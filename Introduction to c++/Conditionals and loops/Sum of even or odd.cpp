#include<iostream>
using namespace std;

int main() {
	// Write your code here
	  int n, Even = 0, Odd = 0, r;
      cin>>n;
       while ( n> 0)
     {
       r = n % 10;
       if (r % 2 == 0)
       {
         Even = Even + r;
       }
       else
       {
         Odd = Odd + r;
       }
       n = n/ 10;
     }
   cout << Even << " " <<Odd;
}
