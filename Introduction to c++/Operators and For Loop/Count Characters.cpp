#include<iostream>
using namespace std;
#include<string>
int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */



   char c;
   int alphabet = 0;
   int digit = 0;
   int space = 0;
   c = cin.get();
   while(c!='$'){
       if(c>=97 && c<=122)
          alphabet++;
       else if(c>=48 && c<=57)
           digit++;
       else if(c==9 || c==32||c==10)
           space++;
       c = cin.get();
   }
   cout<<alphabet<<" "<<digit<<" "<<space;

}


