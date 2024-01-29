class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0 ;
        map<int,int> mp;
        for(int i=0 ; i<nums.size() ; i++)
        {
            count = count + mp[nums[i]]++;
        }
        return count ;
    }
};
