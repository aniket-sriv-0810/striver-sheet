#include <bits/stdc++.h>
using namespace std;

vector<int>interArr(vector<int>&nums1,vector<int>&nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i=0,j=0;
    vector<int>ans;
    while(i<n1 && j<n2){
        if(nums1[i] < nums2[j]) i++;
        else if(nums1[i] > nums2[j]) j++;
        else{
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
      vector<int>nums1={9,10,22,25,30,34,49};
    vector<int>nums2={9,25,45,49,66,70};
    vector<int>res = interArr(nums1,nums2);
    for(auto itr : res){
        cout<<itr<<" ";
    }
    return 0;
}