//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        map <char,int> rep;
        for(int i=0;i<s.length();i++)
        {
            rep[s[i]]++;
           
        }
        
        for(int i=0;i<s.length();i++)
        {
             if(rep[s[i]]>1)
             return s[i];
            
        }
        return '#';
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends