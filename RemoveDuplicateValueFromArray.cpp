#include<stdio.h>
#include<iostream>
using namespace std;

int N, j;
int Array[] = {0,1,1,1,3,5,9,11,11,13};

void solveCase()
{
    int i;
    j = 0;
    N = sizeof(Array) / sizeof(Array[0]);
    for(i=0; i<N; i++){
        if(Array[i] != Array[i+1]){
            Array[j++] = Array[i];
        }
    }
}
void printCase(){
    cout<<"Size of unique Array is "<< j<<endl;
    for(int i=0; i<j; i++){
        cout<<Array[i]<<" ";
    }
}
int main()
{
    solveCase();
    printCase();
    return 0;
}
