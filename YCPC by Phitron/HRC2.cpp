#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t, i, j, v=5, o=3;
    cin>>t;

    int k = (t/2)+5;


    for(i=0; i<=(t/2)+5; i++){
        for(j=0; j<k; j++){
            cout<<" ";

        }
        if(i==0){
            cout<<"*"<<endl;
            v--;

        }
        else{
            for(j=0; j<o; j++){
                cout<<"*";

            }
            cout<<endl;
            v--;
            o+=2;
        }
        k--;
    }
    v=5, o=3;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout<<" ";
        }
        for(j=0; j<t; j++){
            cout<<"*";

        }
        cout<<endl;

    }

}

