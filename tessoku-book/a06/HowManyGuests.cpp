//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int N,Q;
int A[100009];
int L[100009], R[100009];

int main(){
    cin>>N>>Q;
    for (int i=1;i<=N;i++){
        cin>>A[i];
    }
    for (int i=1;i<=Q;i++){
        cin>>L[i]>>R[i];
    }
    int total[100009];
    total[0]=0;
    for(int i=1;i<=N;i++){
        total[i]=total[i-1]+A[i];
    }
    for (int i=1;i<=Q;i++){
        cout<<total[R[i]]-total[L[i]-1]<<endl;  //L[i]-1!!
    }
    return 0;
}
