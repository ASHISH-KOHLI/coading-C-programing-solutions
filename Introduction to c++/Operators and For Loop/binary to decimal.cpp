#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	long long int n;
    cin>>n;
    int ans=0,i=0,rem;
    while(n!=0){
        rem = n%10;
        n/=10;
        ans=ans+rem *pow(2,i);
        ++i;

    }
    cout<<ans;

}
