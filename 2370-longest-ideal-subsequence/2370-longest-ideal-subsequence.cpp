class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> cnt(26,0);
        int ans=0;
        cnt[s[0]-'0'-49]=1;
        for(int i=1;i<s.length();i++)
            {
            int tmp=0;
            char t=min('z'-'0'-49,s[i]-'0'-49+k);
         for(int c=s[i]-'0'-49+1;c<=t;c++)
             tmp=max(cnt[c]+1,tmp);
            t=max('a'-'0'-49,s[i]-'0'-49-k);
            for(int c=s[i]-'0'-49-1;c>=t;c--)
             tmp=max(cnt[c]+1,tmp);
        cnt[s[i]-'0'-49]=max(cnt[s[i]-'0'-49]+1,tmp);
        }
        for(char c=0;c<26;c++)
            ans=max(ans,cnt[c]);
        return ans;
    }
};