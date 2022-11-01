#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	int n;
        cin>>n;
    int output =0;
    while(output * output <=n)
    {
        output = output + 1;
    }
    output = output - 1;
    cout<<output;
}
