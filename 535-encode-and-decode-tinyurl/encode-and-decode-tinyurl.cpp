class Solution {
public:

    // Encodes a URL to a shortened URL.
    int websites=0;
    map<string,string>m;
    string encode(string longUrl) {
        websites++;
        string addon=to_string(websites);
        string tinyurl="http://tinyurl.com/";
        tinyurl=tinyurl+addon;
        m[tinyurl]=longUrl;
        return tinyurl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
      return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));