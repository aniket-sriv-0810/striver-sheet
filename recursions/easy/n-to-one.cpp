#include <bits/stdc++.h>
using namespace std;

void printNo(int n){
    if(n<1) return;
    cout<<n<<" ";
    printNo(n-1);
}

int main(){
    int n = 10 ;
    printNo(n);
    return 0;
}