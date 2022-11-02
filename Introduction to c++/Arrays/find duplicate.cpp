#include <iostream>
using namespace std;

#include "solution.h"

int duplicateNumber(int *arr, int size)
{
    //Write your code here
   int natural_sum=0;
    for(int i=0;i<=size-2;i++)
    {
        natural_sum+=i;
    }
    int actual_sum=0;
    for(int i=0;i<size;i++)
    {
       actual_sum+=arr[i];
    }

    int dublicate=actual_sum-natural_sum;
    return dublicate;

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

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}
