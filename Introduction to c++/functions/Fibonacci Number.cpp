#include<iostream>
using namespace std;
#include "Solution.h"


int fib(int n)
{
    int a=0, b=1, c, i=2, temp;
    while(i<=n)
    {
        c = a+b;
        a = b;
        b = c;
        i++;
    }
    return b;
}

bool checkMember(int n){
    if(n==0 || n==1) return true;
   int i=0, temp;
   temp = fib(i);
   while(temp<=n)
   {
       if(fib(i)==n)
       {
           return true;
       }
       i++;
       temp = fib(i);
   }
   return false;
}


int main(){

  int n;
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}


