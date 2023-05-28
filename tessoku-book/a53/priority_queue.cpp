#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int Q;
int QueryType[100009]; int price[100009];
priority_queue<int, vector<int>, greater<int>> T;  //ここ！！

int main(){
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>QueryType[i];
        if(QueryType[i]==1){
            cin>>price[i];
        }
    }
    for(int i=0;i<Q;i++){
        if(QueryType[i]==1){
            T.push(price[i]);
        }
        if(QueryType[i]==2){
            cout<<T.top()<<endl;
        }
        if(QueryType[i]==3){
            T.pop();
        }
    }
    return 0;
}
