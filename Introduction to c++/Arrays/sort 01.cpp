#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"

void sortZeroesAndOne(int *input, int size)
{



     int start = 0;
    int mid = 0;
    int end = size-1;
    while(mid<=end){
        if(input[mid]==1){
            mid++;
        }
        else if(input[mid]==0){
            swap(input[start],input[mid]);
            mid++;
            start++;
        }
        else{
            swap(input[mid],input[end]);
            end--;
        }
    }
}
int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
