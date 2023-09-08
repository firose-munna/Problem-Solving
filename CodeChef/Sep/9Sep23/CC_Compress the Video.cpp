#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase, i;
    cin>>testCase;
    for(i=0; i<testCase; i++){
        int n,j, k, cnt=1;
        cin>>n;
        int a[n];
        for(j=0; j<n; j++){
            cin>>a[j];
        }

        for(j=0; j<n-1; j++){
            if(a[j] != a[j+1]){
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
}
