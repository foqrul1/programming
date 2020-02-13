#include<bits/stdc++.h>
#define sz 101
using namespace std;
int Array[sz], Sum=0,N;

void readCase()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++){

        scanf("%d", &Array[i]);
    }
}
int distance1(int i, int j){
    if(i>j){
        return i-j;
    }return j-i;
}
void sortArray(){
    int temp=0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(Array[i]>Array[j]){
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
}
void solveCase()
{
    int test;
    sortArray();
    //sort(Array, Array+N);
    for(int i=0; i<N; i++){

        printf("%d ", Array[i]);
    }
    for(int i=0; i<N; i++){
        if(i+1<N){
            test = distance1(Array[i], Array[i+1]);
            if(Sum<test){
                Sum = test;
            }
        }
    }
}
void printCase(){
    printf("Max Distance is %d", Sum);
}
int main()
{
    readCase();
    solveCase();
    printCase();

    return 0;
}
A = [5, 4, 3, 2]
[2,3,4,5] Maximum Distance is 1;
