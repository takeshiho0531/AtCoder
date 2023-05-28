//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int N,Q;
int A[10009];
int LR[100009][9];

int main(){
    cin>>N>>Q;
    for (int i=1;i<=N;i++){
        cin>>A[i];
    }
    for (int i=1;i<=Q;i++){
        cin>>LR[i][1]>>LR[i][2];
    }
    int total[10009];
    for (int i=1;i<=N;i++){
        if (i==1) total[1]=A[1];
        else{
            total[i]=total[i-1]+A[i];
        }
    }
    for (int i=1;i<=Q;i++){
        cout<<total[LR[i][2]-LR[i][1]]<<endl;
    }
    return 0;
}
