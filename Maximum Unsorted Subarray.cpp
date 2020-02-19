#include<bits/stdc++.h>
using namespace std;
int Arr[101], test[101], N, flag;
int initLength=0, maxLength=0, Min, Max;
int index;

void left(){
    for(initLength=0; initLength<N-1; initLength++){
        if(Arr[initLength]>Arr[initLength+1]){
            break;
        }
    }
    if(initLength==N-1){
        flag=1;
        return;
    }
}
void right(){
    for(maxLength=N-1; maxLength>=0; maxLength--){
        if(Arr[maxLength-1]>Arr[maxLength]){
            break;
        }
    }
}
void UnsortedArrayMinMax()
{
    Max = 0;
    for(int i=initLength; i<=maxLength; i++){
        if(Arr[i]>Max){
            Max = Arr[i];
        }
    }
    Min = Max;
    for(int i=initLength; i<=maxLength; i++){
        if(Arr[i]<Min){
            Min = Arr[i];
        }
    }
    //printf("New Min %d Max %d\n", Min, Max);

}
void checkMax()
{
    int length = 0;
    for(int i=maxLength+1; i<N; i++){
        if(Max>Arr[i]){
           length++;
        }
    }
    maxLength += length;
    //printf("Update Max is: %d & %d\n", maxLength, Arr[maxLength]);
}
void checkMin()
{
    int lenght=0;
    for(int i = initLength-1; i<=0; i--){
        if(Min<Arr[i]){
            lenght++;
        }
    }
    initLength -=lenght;
    //printf("Update Min is: %d and %d\n", initLength, Arr[initLength]);
}
void startSort()
{
    index = 0;
    for(int i=initLength; i<=maxLength; i++){
        test[index++] = Arr[i];
        //printf("%d \n", index);
    }
    sort(test, test+index);
}
void solveCase()
{
    flag = 0;
    left();
    if(flag==1){
        return;
    }
    right();
    //printf("Max set %d and %d Min Set %d and %d\n", initLength,Arr[initLength], maxLength, Arr[maxLength]);
    UnsortedArrayMinMax();
    checkMin();
    checkMax();
    startSort();
}
void printCase()
{
    if(flag==1){
        printf("All elements are already Sorted\n");
    }else{
        int sz = sizeof(test)/sizeof(test[0]);
        cout<<"Maximum Length are "<<index<<"\n";
        for(int i=0; i<index; i++)
        {
            cout<<test[i]<<" ";
        }
        printf("\n");
    }
}
void initCase()
{
    for(int i=0; i<N; i++){
        Arr[i]=0;
        test[i]=0;
    }
}
void readCase()
{
    cin>>N;
    initCase();
    for(int i=0; i<N; i++){
        cin>>Arr[i];
    }

}
int main()
{
    freopen("input.txt", "r", stdin);
    for(int i=0; i<3; i++){
        readCase();
        solveCase();
        printCase();
    }
    return 0;
}
