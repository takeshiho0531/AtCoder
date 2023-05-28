#include <bits/stdc++.h>
//#include <queue>
using namespace std;

int T;
long long N[100009];


string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int Decimal(string binary){
    int decimal=0;
    for (int i=1;i<=binary.size();i++){
        if (binary[binary.size()-i]=='1'){
            decimal+=pow(2,i-1);
        }
    }
    return decimal;
}

int main(){
    cin>>T;
    for (int i=1;i<=T;i++){
        cin>>N[i];
    }
    for (int i=1;i<=T;i++){
        string binary = toBinary(N[i]);
        int count=0;

        for (int j=0;j<binary.size();j++){
            if (binary[j]=='1') count++;
        }

        //if (count==3) cout<<Decimal(toBinary(N[i]))<<endl;
        if (count==3) cout<<N[i]<<endl;
        else if (count>3){
            int minus = count-3;
            for (int k=1;k<=binary.size();k++){
                if (minus<=0){
                    binary=binary;
                }
                else if (binary[binary.size()-k]=='1') {
                    binary[binary.size()-k]=0;
                    minus--;
                }
            }
            cout<<Decimal(binary)<<endl;
        }
        else if (count==2 && binary[binary.size()]=='1'){
            for (int k=1;k<=binary.size();k++){
                if (binary[k]=='1'){
                    binary[k]='0';
                    binary[k+1]='1';
                    binary[k+2]='1';
                }
            }
            cout<<Decimal(binary)<<endl;
        }
        else if ((count==1 or count==2) && (binary.size()>=4) ){
            binary[0]='0';
            binary[1]='1';
            binary[2]='1';
            binary[3]='1';
            cout<<Decimal(binary)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    

    }
    return 0;
}