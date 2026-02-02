class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int,int> um;
        for(int n=0;n<nums.size();n++){
            if(um.count(nums[n]) && n-um[nums[n]]<=k){return true;}
            um[nums[n]]=n;
        }
        return false;
    }
};
