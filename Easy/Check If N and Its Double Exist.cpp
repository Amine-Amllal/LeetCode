class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int size = arr.size();
        for(int i=0; i<size; i++){
            for( int j=0 ; j<size;j++){
                if (i==j) continue;
                if(arr[i]==arr[j]*2){
                    return true;
                }
            }
        }
        return false;
    }
};