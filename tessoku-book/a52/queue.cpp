#include <iostream>
#include <queue>
#include <string>
using namespace std;

int Q;
int QueryType[100009]; string x[100009];
queue<string> T;
int main(){
    cin>>Q;
    for (int i=0;i<Q;i++){
        cin>>QueryType[i];
        if (QueryType[i]==1){
            cin>>x[i];
        }
    }
    for (int i=0;i<Q;i++){
        if (QueryType[i]==1){
            T.push(x[i]);
        }
        if(QueryType[i]==2){
            cout<<T.front()<<endl;
        }
        if (QueryType[i]==3){
            T.pop();
        }
    }
    return 0;
}