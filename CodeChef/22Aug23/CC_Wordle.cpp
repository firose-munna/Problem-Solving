#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase;
    string S, T, M="ABCDE";

    cin>> testCase;

    for(int i=0; i<testCase;  i++){
        cin>>S>>T;

        if(S[0] == T[0]){
            M[0] = 'G';
        }
        else{
            M[0] = 'B';
        }
        if(S[1] == T[1]){
            M[1] = 'G';
        }
        else{
            M[1] = 'B';
        }
        if(S[2] == T[2]){
            M[2] = 'G';
        }
        else{
            M[2] = 'B';
        }
        if(S[3] == T[3]){
            M[3] = 'G';
        }
        else{
            M[3] = 'B';
        }
        if(S[4] == T[4]){
            M[4] = 'G';
        }
        else{
            M[4] = 'B';
        }
        cout<<M<<endl;

    }
    return 0;

}
