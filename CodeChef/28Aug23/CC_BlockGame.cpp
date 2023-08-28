#include<bits/stdc++.h>
using namespace std;

int main(){

    int i, testCase, j, len, k, cnt=0;
    string str;

    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>>str;
        len = str.length();

        for(j=0, k = len-1; j<(len/2); j++, k--){
            if(str[j] == str[k]){
                cnt++;
            }
        }
        if(cnt == (len/2))
            cout<<"wins"<<endl;
        else
            cout<<"loses"<<endl;

        cnt=0;
    }


    return 0;

}
