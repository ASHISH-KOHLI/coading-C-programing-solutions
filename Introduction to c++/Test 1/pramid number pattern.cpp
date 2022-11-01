/*

 pyramid number pattern

   1
  212
 32123
4321234

*/

#include<iostream>
using namespace std;

int main(){



  int row;
  cin>>row;
 int i,j;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }

        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }

        for(j=2;j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

}

