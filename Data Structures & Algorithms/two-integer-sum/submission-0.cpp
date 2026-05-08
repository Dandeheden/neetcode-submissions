class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int d=target-nums[i];
            if(m.count(d)){
                return{m[d],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
