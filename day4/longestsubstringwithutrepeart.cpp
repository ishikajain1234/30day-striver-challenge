#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vc vector<char>
#define inp(n) int n;cin>>n;
#define loop(v) for(auto &it:v)
#define umi unordered_map<int,int>;
#define umc unordered_map<char,int>;
#define usi unordered_set<int>;
#define usc unordered_set<char>;
#define pqi priority_queue<int>;
#define pqc priority_queue<char>;
#define pqpi priority_queue<pair<int,int>>;
#define pqpc priority_queue<pair<char,int>>;
#define vtwo vector<vector<int>>;
#define sort(v) sort(v.begin(),v.end());
#define MOD 100000007;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int maxi=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
              
               while(s[i]!=s[j]){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
               }
               mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
               i++;
            }
              maxi=max(maxi,j-i+1);
            mp[s[j]]++;
            j++;
        }
        return maxi;
    }
};