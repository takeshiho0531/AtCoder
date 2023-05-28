#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N,M;
int a[59][59];

bool judge_friend(int person, int f[59]){
    for (int m=1;m<=M;m++){
        for (int p=1;p<=N;p++){
            int position;
            if(a[m][p]==person){
                position=p;
            }
            f[p-1]=true;
            f[p]=true;
            f[p+1]=true;

        }
    }
    int count=0;
    for (int n=1;n<=N;n++){
        if(f[n]==false){
            count++;
        }

    }
    return count;


}

int main(){
    cin>>N>>M;
    for (int i=1;i<=M;i++){
        for (int j=1;j<=N;j++){
            cin>>a[i][j];
        }
    }
    int f[59];
    for(int a=1;a<=N;a++){
        f[a]=false;
    }
    int count;
    for (int n=1;n<=N;n++){
        count+=judge_friend(n, f);

    }
    cout<<count<<endl;
    return 0;
    
}