class Solution {
public:
    long long countVowels(string word) {
        long long n=word.size();
        long long c=0;
        for(long long i=0;i<n;i++)
        {
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
            {
                c+=(n-i)*(i+1);
            }
        }
        return c;
    }
};