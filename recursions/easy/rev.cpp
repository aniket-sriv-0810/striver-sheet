#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int>&nums){
    for(auto x : nums){
        cout<<x<<" ";
    }
}
void revArr(vector<int>&nums , int i){
    int n = nums.size();
    if(i >= n/2) return ;
    swap(nums[i] , nums[n-i-1]);
    revArr(nums,i+1);
}
int main(){
    vector<int>nums={1,2,3,4,5,6};
    revArr(nums,0);
    printArr(nums);
    return 0;
}