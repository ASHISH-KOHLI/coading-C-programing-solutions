/*
inverted number pattern

4444
333
22
1


*/
#include <iostream>
using namespace std;

int main() {
	int n,i,j;
	cin >> n;
	for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

}
