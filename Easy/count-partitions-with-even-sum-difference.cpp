class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int size = nums.size();
        int S = size-1;
        vector<int> c = nums;
        for(int i= 1; i<size ; i++){
            c[i] = c[i]+c[i-1];
        }
        for(int i=0; i<size-1; i++){
            if(abs(((c[size-1]-c[i])-c[i]))%2==1){
                S--;
            }
        }
        return S;
    }
};
