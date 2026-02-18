#include<bits/stdc++.h>
using namespace std;

int bSearch(vector<int>&nums , int key , int st , int end){
    int n = nums.size();
    if(st>end) return -1;
    int mid = st+(end-st)/2;

    if(nums[mid] == key) return mid;

    if(nums[mid] > key ) return bSearch(nums,key,st,mid-1);

    else return bSearch(nums,key,mid+1,end);

}

int main(){
    vector<int> nums={1,2,3,4,6,7,8};
    cout<<"Result 1 - "<<bSearch(nums,7,0,nums.size()-1)<<endl;
    cout<<"Result 1 - "<<bSearch(nums,9,0,nums.size()-1)<<endl;
    return 0;
}