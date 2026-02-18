#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,1,1,1,1,1,0,0,0,3,4,1,1,1,3,5,0,2,1,5,1,1};
    int count=0;
    int maxi=INT_MIN;
    for(auto x : nums){
        if(x== 1){
            count++;
            maxi=max(maxi,count);
        }
        else count=0;
    }
    cout<<"Max 1 -> "<<maxi<<endl;
    return 0;
}