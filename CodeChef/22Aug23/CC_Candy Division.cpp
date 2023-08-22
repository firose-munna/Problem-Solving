#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, candy;

    cin>> testCase;

    for(int i=0; i<testCase;  i++){
        cin>>candy;

        if(candy%3 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
