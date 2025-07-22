class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int> myset = set(nums.begin(),nums.end());

       if (myset.size()==nums.size()){
        return false;
       }
       else{
        return true;
       }

    }
};