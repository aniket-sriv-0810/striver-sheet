#include <bits/stdc++.h>
using namespace std;

int sumOfN(int n){
    if(n<1) return 0;
    return n + sumOfN(n-1);

}
int main(){
    int n = 10;
    cout<<"Sum ->"<<sumOfN(n)<<endl;
    return 0;

}