class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        if(s.size() < p.size()) return {};
        
        vector<int>ans;
        
        vector<int>freq(26, 0), mp(26,0);
        for(auto ch : p)
            freq[ch - 'a']++;
        
        int j = 0;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i] - 'a']++;
            while(mp[s[i] - 'a'] > freq[s[i] - 'a'])
            {
                mp[s[j] - 'a']--;
                j++;
            }
            bool possible = true;
            for(int i = 0; i < 26; i++)
            {
                if(mp[i] != freq[i]) 
                {
                    possible = false;
                    break;
                }
            }
            if(possible)
                ans.push_back(j);
        }
        
        return ans;
    }
};