#include<bits/stdc++.h>
using namespace std;
int nextpalindrome(int n){
    int num,rem,rev=0;
    num=n;
    while(n>0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(num==rev) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    while(!nextpalindrome(n)){
        n++;
    }
    cout<<"Next smallest palindrome "<<n;
    return 0;
}
