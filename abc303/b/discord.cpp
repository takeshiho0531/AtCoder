#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N,M;
int a[59][59];

int judge_friend(int person, int people[59]){
    //people[person]=true;

    for (int k=1;k<=M;k++){
        //int position;
        for (int b=1;b<=N; b++){
            if (a[k][b]==person){
                //position=b;
                people[a[k][b-1]]=true;
                people[a[k][b]]=true;
                people[a[k][b+1]]=true;
            }
        }
        //people[a[k][position-1]]=true;
        //people[a[k][position+1]]=true;
    }
    int count=0;
    for (int j=1;j<=N;j++){
        if (people[j]==false){
            count++;
        }
    }
    return count;
}

int main(){
    cin>>N>>M;
    for(int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            cin>>a[i][j];
        }
    }

    int people[59];
    for (int i=1;i<=N;i++){
        people[i]=false;
    }

    int total_count=0;
    for (int l=1;l<=N;l++){
        total_count+=judge_friend(l, people);
    }
    cout<<total_count/2<<endl;

    return 0;

}