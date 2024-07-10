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

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int xori=0;
    unordered_map<int,int>mp;
    mp[xori]++;
    int count=0;
    for(int i=0; i<n; i++){
        xori=xori^A[i];
        int x=xori^B;
        count+=mp[x];
        mp[xori]++;
    }
    return count;
}
