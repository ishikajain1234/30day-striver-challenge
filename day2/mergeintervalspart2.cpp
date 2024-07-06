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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int m=intervals[0].size();
        vector<vector<int>>v;
        sort(intervals.begin(),intervals.end());
        for(int i=0; i<n; i++){
            int x=intervals[i][0];
            int y=intervals[i][1];
            if(v.size()<=0 || v.back()[1]<intervals[i][0]){
                v.push_back({x,y});
            }
            else{
                v.back()[1]=max(v.back()[1],intervals[i][1]);
            }
        }
        return v;
    }
};