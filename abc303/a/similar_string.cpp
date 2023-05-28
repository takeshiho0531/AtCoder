#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N;
string S, T;

bool judge_similar_char(char character1, char character2){
    bool answer =true;
    if(character1=='1' && character2=='l'){
        return true;
    }
    else if (character1=='l' && character2=='1'){
        return true;
    }
    else if (character1=='0' && character2=='o'){
        return true;
    }
    else if (character1=='o' && character2=='0'){
        return true;
    }
    else if(character1==character2){
        return true;
    }
    else {
        return false;
    }

}


bool similar_string(string input1, string input2){
    bool final_answer = true;
    for (int i=0;i<input1.size();i++){
        bool answer=judge_similar_char(input1[i], input2[i]);
        if (answer==true){
            final_answer=final_answer;
        }
        else if (answer==false){
            final_answer=false;
        }
    }
    return final_answer;
}

int main(){
    cin>>N>>S>>T;
    bool answer = similar_string(S, T);
    if (answer==true){
        cout<<"Yes"<<endl;
    }
    if (answer==false){
        cout<<"No"<<endl;
    }
    return 0;

}