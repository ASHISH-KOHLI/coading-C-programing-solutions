#include<iostream>
using namespace std;
#include "Solution.h"



void printTable(int start, int end, int step) {

    while(start<end){
    int C = (5 * start-32*5)/9;
        cout <<start<<"\t"<<C<<endl;;
        start=start+step;
        }
}


int main(){
    int start, end, step;
    cin >> start >> end >> step;

    printTable(start, end, step);
}
