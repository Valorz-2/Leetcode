class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> result;
        sort(nums.begin(),nums.end());
        for(int i = 1;i<=nums.size();i++)
            if(!binary_search(nums.begin(),nums.end(),i))
                result.push_back(i);
        return result;
    
    }
};