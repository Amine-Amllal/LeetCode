class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        long int r=0, temp=x;   
        while (temp!=0){
            r = r*10 + temp%10;
            temp = temp/10;
        }
        return r==x?1:0;
    }
};