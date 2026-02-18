#include <bits/stdc++.h>
using namespace std;

void printNo(int n){
    //base case
    if(n<1) return;
    printNo(n-1);
    cout<<n<<" ";
}
int main(){
    int n = 10 ;
    printNo(n);
    return 0;
}