#include<bits/stdc++.h>
using namespace std;
int checkpair(int arr[],int n,int m){
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(arr[i]+arr[j]==n) return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    int arr[]={2,5,8,-1,3,-4};
    cin>>n;
    int m=sizeof(arr)/sizeof(arr[0]);
    if(checkpair(arr,n,m)) cout<<"Exists";
    else cout<<"Not Exists";
    return 0;
}
