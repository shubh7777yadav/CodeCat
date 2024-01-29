class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        int i=0,j=0;
        while(i<ans.size()){
            if(j==n-1){
                ans[i]=nums[j];
                j=0;
                i++;
            }
            else{
                ans[i]=nums[j];
                i++;
                j++;
            }
        }
        return ans;
    }
};
