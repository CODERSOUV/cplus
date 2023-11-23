#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]+nums[j]==target) {
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};

int main() {
   Solution sol;
   vector<int> nums = {2,7,11,15};
   int target = 9;
   vector<int> ans=sol.twoSum(nums,target);
   for(auto i=ans.begin();i!=ans.end();i++) {
    cout<<*i<<" ";
}
}