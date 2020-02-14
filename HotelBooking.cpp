#include<bits/stdc++.h>
using namespace std;

int Arrival[20], Departure[20], k, sub[40], result, dec1;


void readCase()
{
    scanf("%d", &k);
    int test=0;
    for(int i=0; i<3; i++){
        scanf("%d", &Arrival[i]);
        sub[test++] = Arrival[i];
    }
    for(int i=0; i<3; i++){
        scanf("%d", &Departure[i]);
        sub[test++] = Departure[i];
    }
}
void solveCase()
{
    result =0;
    dec1 = 0;
    sort(sub, sub+6);
    for(int i=0; i<6; i++){
        int flag = 0;
        for(int j=0; j<3; j++){
            if(Arrival[j]==sub[i]){
                result++;
                flag = 1;
                printf("Arrive %d\n", result);
                if(result>k){
                    dec1 = 1;
                    break;
                }
            }

        }
        if(flag==0){
            result--;
            printf("Depart %d\n", result);
        }
    }
}
void printCase()
{
    if(dec1==0){
        printf("possible\n");
    }else{
        printf("Not possible\n");
    }
}
int main()
{
    readCase();
    solveCase();
    printCase();

    return 0;
}
