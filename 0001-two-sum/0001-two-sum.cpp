class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myhashtable;

        for (int i = 0; i < nums.size();i++) {
            int complement = target - nums[i];
            if(myhashtable.count(complement)){
                return {myhashtable[complement], i};
            }
            myhashtable[nums[i]] = i;
        }
        return {};

}
};