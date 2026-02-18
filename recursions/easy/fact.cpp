#include <bits/stdc++.h>
using namespace std ;

int factN(int n){
    if(n<1) return 1;

    return n * factN(n-1);
}
int main(){
    int n=5;
    cout<<"Factorial -> "<<factN(n)<<endl;
    return 0;
}