class Solution {
public:

    // Encodes a URL to a shortened URL.
    int i=0;
    map<string,string>mp;
    string encode(string longUrl) {
       string s="http://tinyurl.com/"+to_string(i);
        i++;
        mp[s]=longUrl;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));