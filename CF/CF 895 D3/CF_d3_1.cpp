#include<bits/stdc++.h>
using namespace std;

int main()
{

    int testCase, i, a, b, c, temp ;
    cin>>testCase;
    for(i=0; i<testCase; i++){
         int cnt=0;
        cin>>a>>b>>c;


        if(a<b){
            temp = a;
            a = b;
            b = temp;
        }

        if( a==b){
            cnt = 0;
        }
        else if(a<=c){
            cnt=1;
        }

        else{
            while((b+c)<= (a-c)){
                cnt++;
                b+=c;
                a-=c;

            }
            if(a!=b){
                cnt++;
            }

        }

        cout<<cnt<<endl;


    }
}
