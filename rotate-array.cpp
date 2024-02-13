class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int n=nums.size();
        // vector <int> v(n);
        // for(int i=0 ; i<n ;i++)
        // {
        //     //modulus operater application
        //   int newi=(i+k)%n;
        //   v[newi]=nums[i];
        // }
        // nums=v;
        int n = nums.size() ;
        k = k%n ;
        reverse(nums.begin(),nums.end()) ;
        reverse(nums.begin(),nums.begin()+k) ;
        reverse(nums.begin()+k,nums.end()) ;
    }
};
