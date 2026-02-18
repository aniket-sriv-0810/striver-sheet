#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&nums , int key){
    int n = nums.size();
    int st=0 , end=n-1;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(nums[mid] == key) return mid;
        else if(nums[mid] > key ) end = mid-1;
        else st=mid+1;
    }
    return -1;
}
int main(){
    vector<int>nums={12,18,19,30,39,45};
    int key=39;
    cout<<"Res->"<<binarySearch(nums,key)<<endl;
    return 0;
}