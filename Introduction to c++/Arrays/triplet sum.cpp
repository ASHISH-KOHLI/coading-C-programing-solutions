#include <iostream>
using namespace std;

#include "solution.h"

int tripletSum(int arr[], int n, int x){
   int count=0;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           for(int k=0;k<n;k++){
               if(i==j || j==k || i==k){
                   continue;
               }
               if(arr[i]+arr[j]+arr[k]==x){
                   count++;
               }
           }
       }
   }
   return count/6;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
