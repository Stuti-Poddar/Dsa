#include<bits/stdc++.h>
using namespace std;
void oddocc(int arr[],int n){
   unordered_map<int,int> occ;
   for(int i=0;i<n;i++){
    occ[arr[i]]++;
   }
   for(auto it:occ){
    if(it.second%2!=0){
        cout<<it.first<<" ";
    }
   }
}
int main(){
    int arr[]={3,9,3,1,3,9,1,9,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    oddocc(arr,n);
}
