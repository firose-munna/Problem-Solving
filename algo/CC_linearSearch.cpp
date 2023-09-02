#include <bits/stdc++.h>
using namespace std;

int linearSearch(int ary[], int n, int len){
    int i;
    for(i=0; i<len; i++){
        if(ary[i]== n){
            return 1;
        }
    }
    return -1;


}

int main() {

    int n, i, len, r;

    cout<<"Enter the length of array : ";
    cin>>len;

    int ary[len];

    cout<<"Enter the array : ";
    for(i=0; i<len; i++){
        cin>>ary[i];
    }

    cout<<"Enter the number which you want to find out : ";
    cin>>n;

    r = linearSearch(ary, n, len);

    if(r==1){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


	return 0;
}
