#include<bits/stdc++.h>
using namespace std;
void uni(int arr1[],int arr2[],int n,int m){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int j=0;j<m;j++){
        s.insert(arr2[j]);
    }
    cout<<"union:";
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}
void inter(int arr1[],int arr2[],int n,int m){
    set<int> s1,s2;
    for(int i=0;i<n;i++){
        s1.insert(arr1[i]);
    }
    for(int j=0;j<m;j++){
        s2.insert(arr2[j]);
    }
    vector<int> v;
    for(auto i:s1){
        v.push_back(i);
    }
    for(auto i:s2){
        v.push_back(i);
    }
    int count=1;
    cout<<"intersection:";
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                cout<<v[i]<<" ";
            }
        }
    }
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,4,5,6,7};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m =sizeof(arr2)/sizeof(arr2[0]);
    uni(arr1,arr2,n,m);
    inter(arr1,arr2,n,m);
    return 0;
}
