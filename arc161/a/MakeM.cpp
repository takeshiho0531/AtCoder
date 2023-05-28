#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N;
int A[1000000009];

int main(){
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>A[i];
    }
    bool answer=false;
    sort(A, A+N, greater<int>());
    int even = N/2;
    if (A[even-1]!=A[even]){
        answer=true;
    }
    if (answer==true) cout<<"Yes"<<endl;
    if (answer==false) cout<<"No"<<endl;

    return 0;
}