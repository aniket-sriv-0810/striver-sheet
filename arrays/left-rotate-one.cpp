#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={12,3,5,6,7,88,9,8};
    int n = nums.size();
   int temp = nums[0];
    for(int i =1; i< nums.size() ; i++){
        nums[i-1] = nums[i];
    }
    nums[n-1] =temp;
    for(auto itr : nums){
        cout<<itr<<" ";
    }
    return 0;
}
//TC:O(n)
//SC:O(1)