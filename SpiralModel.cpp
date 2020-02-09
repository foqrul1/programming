// given an 2d array. we have to arrange their in a spiral Model.  
//Array[4][4] = {{1,2,3,4}, 
                {5,6,7,8}, 
                {9,10,11,12},
                {13,14,15,16}};
 //then result will be 1 2 3 4 8 12 16 20 19 18 17 13 9 5 6 7 11 15 14 10
 

#include<iostream>
#include<stdio.h>
using namespace std;

//int Array[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16}};
int Array[5][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16}, {17,18,19,20}};
int row=5, col=4;
int strow =0, stcol=0;
void solveCase()
{
    while(row>1 && col>1){
        for(int i=stcol; i<col; i++){
            printf("%d ", Array[strow][i]);
        }
        for(int j=strow+1; j<row; j++){
            printf("%d ",Array[j][col-1]);
        }
        for(int i=col-2; i>=stcol; i--){
            printf("%d ", Array[row-1][i]);
        }
        for(int j=row-2; j>strow; j--){
            printf("%d ", Array[j][stcol]);
        }
        row = row-1;
        col = col-1;
        stcol++;
        strow++;
    }
}

int main()
{
    solveCase();
    return 0;
}
