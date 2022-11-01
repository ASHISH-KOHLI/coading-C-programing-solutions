#include<iostream>
using namespace std;

int main() {
	int x;
    cin>>x;
    int count = 1;
    int term;
    int n=1;
    while(count<=x){
        term=(3*n)+2;
        if(term%4!=0)
        {
            cout<<term<<" ";
            count++;
        }
        n++;
    }
}
