#include<bits/stdc++.h>
using namespace std;
void duplicate(string s){
    unordered_map<char,int> cnt;
    for(int i=0;i<s.size();i++){
        cnt[s[i]]++;
    }
    for(auto it:cnt){
        if(it.second>1){
            cout<<it.first<<"-"<<it.second<<endl;
        }
    }
}
int main(){
    string s="mississippi";
    duplicate(s);
    return 0;
}
