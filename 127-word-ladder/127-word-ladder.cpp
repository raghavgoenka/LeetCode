class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
         unordered_set<string> mp;
        queue<string> q;
        for(int i = 0;i<wordList.size();i++) {
            mp.insert(wordList[i]);
        }
        if(mp.find(endWord) == mp.end()) {
            return 0;
        }
        
        q.push(beginWord);
        int c=1;
        while(!q.empty())
        {
         int size = q.size();
            c++;
            for(int i = 0;i<size;i++) {
                string temp = q.front();
                q.pop();
                
                for(int j = 0;j<temp.size();j++) {
                   
                    char ch = temp[j];
                    for(int k = 0;k<26;k++) {
                        temp[j] = k+'a'; 
                      
                        
                        if(mp.find(temp) != mp.end()) {
                            q.push(temp);
                            mp.erase(temp);
                            if(temp == endWord) {
                                return c;
                            }
                        }
                    }
                    temp[j] = ch;
                    
                }
        }
       }
      return 0;  
    }
};