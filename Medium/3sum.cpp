class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,  l, r, len=nums.size(), sum;
        vector <vector <int>> V ;
        set <int> S;
        sort(nums.begin(), nums.end());
        for(i=0; i<len-2; i++){
            if (S.count(nums[i])==1){
                continue;
            }else{
                S.insert(nums[i]);
            }
            l=i+1;
            r=len-1;
            while(l<r){
                sum =nums[i]+nums[l]+nums[r];
                if(sum>0){
                    r--;
                }else if(sum<0){
                    l++;
                }else{
                    V.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while (nums[l] == nums[l-1] and l<r) l++;
                }
            }
        }
        return V;
    }
};