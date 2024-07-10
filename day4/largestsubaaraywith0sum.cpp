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
    int maxLen(vector<int>& arr, int n) {
        // Your code here
       unordered_map<int,int>mp;
       int sum=0;
       int maxi=0;
       mp.insert({0,-1});
       for(int i=0; i<n; i++){
           sum+=arr[i];
           if(mp.find(sum)!=mp.end()){
               maxi=max(maxi,i-mp[sum]);
           }
           else mp[sum]=i;
           
       }
       return maxi;
    }
};
