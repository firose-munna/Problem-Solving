#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, i, j, cnt=0, ar;

    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>ar;
        int ary[ar];
        for(j=0; j<ar; j++){
            cin>>ary[j];
            if(ary[j]>=1000){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }





    return 0;

}
