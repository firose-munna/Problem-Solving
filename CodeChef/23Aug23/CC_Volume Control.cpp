#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, i, v1, v2, temp;
    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>v1>>v2;

        if(v1 > v2){
            temp = v1;
            v1 = v2;
            v2 = temp;

        }

        cout<<v2-v1<<endl;
    }


    return 0;

}
