class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> vs (26,0);
        vector <int> vt (26,0);
        int len = s.length();
        if  (s.length() != t.length()) return false;
        for ( int i=0 ; i<len ; i++){
            vs[s[i]-'a']++;
            vt[t[i]-'a']++;
        }
        return vs==vt;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <vector <int>, vector <string>> temp;
        for(int i=0;i<strs.size();i++){
            vector <int> count(26,0);
            for (char c : strs[i]){
                count[c-'a']++;
            }
            temp[count].push_back(strs[i]);
        }
        vector <vector <string>> res;
        for ( const auto &pair : temp)
            res.push_back(pair.second);
        return res;
    }
};