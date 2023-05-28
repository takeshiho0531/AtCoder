#include <iostream>
#include <set>
#include <string>
using namespace std;



int main(){
    int Q;
    int QueryType[100009];
    int number[100009];
    set<int> S;

    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>QueryType[i]>>number[i];
    }
    for (int i=0;i<Q;i++){
        if (QueryType[i]==1){
            S.insert(number[i]);
        }
        if (QueryType[i]==2){
            S.erase(number[i]);
        }
        if (QueryType[i]==3){
            auto itr = S.lower_bound(number[i]);
            if(itr ==S.end()){
                cout<<"-1"<<endl;
            }
            else{
                cout<<(*itr)<<endl;
            }
        }

    }
    return 0;
}