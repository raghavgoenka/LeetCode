class Solution {
public:
    unordered_map<int, int> ump;

void conversion(string &s, int start, int end){
    int num = 0;
    for(int i=start;i<=end;i++) num = num*2 + (s[i]-'0');
    
    ump[num]++;
}

bool hasAllCodes(string &s, int k){
    
    int n = s.length();
    
    for(int i=0;i<n-k+1;i++)conversion(s, i, i+k-1);
    return ump.size() == (1 << k);
}
};