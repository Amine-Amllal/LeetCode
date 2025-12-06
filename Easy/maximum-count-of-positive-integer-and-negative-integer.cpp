class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0;
        int pos = 0;
        for(const auto& temp:nums){
            if(temp>0) pos++;
            if(temp<0) neg++;
        }
        return pos>=neg ? pos : neg;
    }
};