class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int SL = s1.length();
        if( SL != s2.length()) return false;
        vector <int> V1(26,0);
        vector <int> V2(26,0);
        int j=0;
        for(int i=0; i<SL;i++){
            V1[s1[i]-'a']++;
            V2[s2[i]-'a']++;
            if(s1[i]!=s2[i]) j++;
        }
        if ((V1==V2) && (j==0 || j==2)) return true;
        return false;
    }
};