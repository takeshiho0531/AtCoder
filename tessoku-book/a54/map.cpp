#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> Map;
int Q;
int QueryType[100009];
string name[100009];
int score[100009];

int main(){
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>QueryType[i];
        if(QueryType[i]==1){
            cin>>name[i]>>score[i];
        }
        if(QueryType[i]==2){
            cin>>name[i];
        }
    }
    for(int i=0;i<Q;i++){
        if (QueryType[i]==1){
            Map[name[i]]=score[i];
        }
        if(QueryType[i]==2){
            cout<<Map[name[i]]<<endl;
        }
    }
    return 0;
}