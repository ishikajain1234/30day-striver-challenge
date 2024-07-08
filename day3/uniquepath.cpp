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
int call(int i,int j,int m,int n,vector<vector<int>>&dp){
    if(i>=m || j>=n)return 0;
    if(i==m-1 && j==n-1)return 1;
    
    if(dp[i][j]!=-1)return dp[i][j];
    int x=call(i+1,j,m,n,dp);
    int y=call(i,j+1,m,n,dp);
    return dp[i][j]=x+y;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return call(0,0,m,n,dp);
    }
};