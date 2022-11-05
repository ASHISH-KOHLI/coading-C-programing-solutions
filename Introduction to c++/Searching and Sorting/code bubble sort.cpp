#include <iostream>
using namespace std;

#include "solution.h"



void bubbleSort(int *input, int size)
{

  for (int step = 0; step < (size-1); ++step) {

    int swapped = 0;


    for (int i = 0; i < (size-step-1); ++i) {


      if (input[i] > input[i + 1]) {


        int temp = input[i];
        input[i] = input[i + 1];
        input[i + 1] = temp;

        swapped = 1;
      }
    }

    if (swapped == 0)
      break;
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

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}
