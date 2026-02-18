#include <bits/stdc++.h>
using namespace std;

void printName(int n ){
    //base case
    if(n<1) return;
    cout<<"Aniket"<<endl;
    printName(n-1);
}
int main(){
    int n = 6 ;
    printName(n);
    return 0;
}