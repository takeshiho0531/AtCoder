#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int D,N;
int L[100009], R[100009];

int main(){
    cin>>D>>N;
    for (int i=1;i<=N;i++){
        cin>>L[i]>>R[i];
    }
    int day[100009];
    for (int i=1;i<=N;i++){
        for (int j=1;j<=D;j++){
            if(j>=L[i] && j<=R[i]){
                day[j]++;
            }
        }
    }
    for (int i=1;i<=D;i++){
        cout<<day[i]<<endl;
    }
    return 0;
}