#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ary[], int n, int len){

    int l, r, mid;

    l = 0;
    r = len-1;


    while(l<=r){
        mid = (l+r)/2;
        if(ary[mid]==n){
            return 1;
        }
        else if(n<ary[mid]){
            r = mid-1;
        }
        else{
            l = mid+1;
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

    r = binarySearch(ary, n, len);

    if(r==1){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


	return 0;
}
