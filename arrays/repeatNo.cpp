#include<bits/stdc++.h>
using namespace std;
void repeat(int arr[],int n){
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++){
        int count=1;
        if(v[j]==v[j+1]){
             count++;
             j++;
        }
        if(count==1) cout<<v[j]<<" ";
    }
    return;
}
int main(){
    int arr[]={3,3,1,8,9,1,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    repeat(arr,n);
}
