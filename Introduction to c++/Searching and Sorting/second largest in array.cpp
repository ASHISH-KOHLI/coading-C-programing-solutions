#include <iostream>
using namespace std;
#include<climits>

#include "solution.h"




int findSecondLargest(int *input, int n)
{
    int max=INT_MIN,second_max=INT_MIN;
    //Write your code here
    for(int i =0;i<n;i++){
        if (input[i]>max){
            second_max =max;
            max =input[i];
        }
        if (input[i]< max && input[i] >second_max){
            second_max = input[i];
        }
    }
    return second_max;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
