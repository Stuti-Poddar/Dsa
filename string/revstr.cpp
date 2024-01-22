#include<iostream>
#include<string>
using namespace std;
void rev(string s,int len){
    if(len==-1)
     return;
    cout<<s[len];
    rev(s,len-1);
}
int main(){
    string s="hello world";
    int len;
    len=s.size();
    rev(s,len-1);
    return 0;
}
