#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N,M;
int a[59][59];

int main(){
    cin>>N>>M;
    for (int i=1;i<=M;i++){
        for (int j=1;j<=N;j++){
            cin>>a[i][j];
        }
    }
    int answer=0;
    for(int p=1;p<=N;p++){
        for (int q=1;q<=N;q++){
            bool flag=false;
            if(p==q) flag=true;
            for (int m=1;m<=M;m++){
                for (int l=1;l<=N;l++){
                    if(a[m][l]==p&&a[m][l+1]==q) flag=true;
                    if(a[m][l]==p&&a[m][l-1]==q) flag=true;
                }
            }
            if(!flag) answer++;
        }

    }
    answer=answer/2;
    cout<<answer<<endl;
    return 0;
}