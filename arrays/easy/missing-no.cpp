#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={1,2,3,5,6,7};
    int n = nums.size();
    int xor1=0;
   for(int i=1;i<=n+1;i++){
    xor1=xor1^i;
   }
   for(auto x : nums){
    xor1 = xor1 ^ x;
   }
    cout<< "missing no->"<<xor1<<endl;
    return 0;
}