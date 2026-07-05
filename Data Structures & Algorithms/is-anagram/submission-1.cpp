class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!= t.length()) return false;

        unordered_map<char,int> s_seen,t_seen;
       for (int i = 0 ; i < s.length() ; i++)
      {
        s_seen[s[i]]++;
        t_seen[t[i]]++;
      }
      return s_seen == t_seen;
    }
};
