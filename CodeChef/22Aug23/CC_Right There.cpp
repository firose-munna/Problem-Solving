#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, people, capacity;

    cin>> testCase;

    for(int i=0; i<testCase;  i++){
        cin>>people>>capacity;

        if(people<=capacity){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
