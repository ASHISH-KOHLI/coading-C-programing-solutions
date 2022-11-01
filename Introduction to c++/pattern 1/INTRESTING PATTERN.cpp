/*
intresting pattern


E
DE
CDE
BCDE
ABCDE
*/

#include<iostream>
using namespace std;


int main() {

	int i, j;
    int n;
    cin>>n;
	for (i=n;i>=1;i--) {
		for (j=i;j<=n;j++) {
			printf("%c",'A' + j-1);
		}
		printf("\n");
	}
}
