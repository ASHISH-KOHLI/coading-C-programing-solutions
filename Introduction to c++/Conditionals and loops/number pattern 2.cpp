
//number pattern 2

/*
    1
   23
  345
 4567

/*





#include<iostream>
using namespace std;
int main(){

int N;
cin>>N;

int row=1;
while(row<=N){
  int space=1;
  while(space<= N-row){
      cout<<" " ;
      space++;
  }
  int col=1;
  while(col<=row)
  {
    cout<<col+row-1;
    col++;
  }
cout<<endl;

    row++;
}


    return 0;
}
