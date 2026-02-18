#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] > nums[i+1]) return false;
    }
    return true;
}
int main(){
    vector<int>nums1={2,34,5,67,8,-1};
    vector<int>nums2={0,0,0,0,0,0,0};
    vector<int>nums3={10,110,118,120,130,150,200};
    cout<<"Res 1 -> "<<isSorted(nums1)<<endl;
    cout<<"Res 2 -> "<<isSorted(nums2)<<endl;
    cout<<"Res 3 -> "<<isSorted(nums3)<<endl;
    return 0 ;
}