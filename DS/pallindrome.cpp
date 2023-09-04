#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s, int len){
    int cnt=0, i,  j;

    for(i=4, j = len-1; i<=(len/2)+1; i++, j--){
        if(s[i]==s[j]){
            cnt++;
        }
    }
    if(cnt==(len-4)/2){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string s;
    getline(cin, s);
    int check = ispalindrome(s, s.length());
    if(check == 1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return  0;

}
