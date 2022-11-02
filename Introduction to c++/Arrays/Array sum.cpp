#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;
    int sum=0;
    int input[1000000];
    for( i=0;i<n;i++){
        cin>>input[i];
    }
    for(i=0;i<n;i++){
    sum = sum + input[i];
    }
    cout<<sum;
}


