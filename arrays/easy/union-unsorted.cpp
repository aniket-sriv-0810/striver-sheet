#include <bits/stdc++.h>
using namespace std;

vector<int>unionArr(vector<int>&nums1 , vector<int>&nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    set<int> st;
    for(auto it : nums1){
        st.insert(it);
    }
    for(auto it : nums2){
        st.insert(it);
    }
    vector<int> ans(st.begin() , st.end());
    return ans;
}

int main(){
    vector<int>nums1={10,9,12,3,45,15,66};
    vector<int>nums2={42,28,5,58,69,0};
    vector<int>res = unionArr(nums1,nums2);
    for(auto itr : res){
        cout<<itr<<" ";
    }
    return 0;
}