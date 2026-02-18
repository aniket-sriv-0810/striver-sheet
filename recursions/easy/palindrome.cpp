#include <bits/stdc++.h>
using namespace std;

bool isPali(string &str , int i){
    int n = str.size();
    if(i >= n/2) return true;

    if(str[i] != str[n-i-1]) return false;
    return isPali(str,i+1);
}
int main(){
    string str = "abcdef";
    string str1 = "abba";
    cout<<"Check1 - " << isPali(str,0)<<endl;
    cout<<"Check2 - "  << isPali(str1,0)<<endl;
}