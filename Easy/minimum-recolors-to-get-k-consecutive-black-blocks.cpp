class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int min = 1000;
        for(int i=0; i<=blocks.length()-k; i++){
            int temp = 0;
            for(int j=0; j<k; j++){
                if (blocks[i+j]=='W') temp++;
            }
            if (temp<min) min = temp;
        }
        return min;
    }
};