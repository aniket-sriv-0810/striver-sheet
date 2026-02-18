#include <bits/stdc++.h>
using namespace std;

vector<int>unionArr(vector<int>&nums1 , vector<int>&nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> ans;
    int i =0 , j=0;
    while(i<n1 && j<n2){
        if(nums1[i] <= nums2[j]){
            if(ans.empty() || ans.back() != nums1[i]) ans.push_back(nums1[i]);
            i++;
        }
        else{
            if(ans.empty() || ans.back() != nums2[j]) ans.push_back(nums2[j]);
            j++;
        }
    }
        while(i<n1){
             if(ans.empty() || ans.back() != nums1[i]) ans.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
             if(ans.empty() || ans.back() != nums2[j]) ans.push_back(nums2[j]);
            j++;
        }
        return ans;
}

int main(){
    vector<int>nums1={12,23,45,55,66};
    vector<int>nums2={12,28,45,58,69};
    vector<int>res = unionArr(nums1,nums2);
    for(auto itr : res){
        cout<<itr<<" ";
    }
    return 0;
}