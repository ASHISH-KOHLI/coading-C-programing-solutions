#include<iostream>
using namespace std;

int main() {
	// Write your code here
   int sum = 0 , prod =	1;
    int n;
    cin>>n;
        int choice;
    cin>>choice;

    if(choice==1){
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        cout<<sum;
    }
    else if(choice==2){
        for(int i=1;i<=n;i++){
            prod=prod*i;
        }
        cout<<prod;
    }
    else{
        cout<<-1;
    }
}
