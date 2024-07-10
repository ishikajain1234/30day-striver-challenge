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
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return 1;
        unordered_set<int>mp;
        for(int i=0; i<n; i++){
            mp.insert(nums[i]);
        }
        vector<int>v;
        for(auto it:mp){
            v.push_back(it);
        }
        sort(v.begin(),v.end());
        if(v.size()==1)return 1;
        int maxi=INT_MIN;
        for(int i=0; i<v.size()-1; i++){
            int x=v[i];
            int count=1;
           while(i+1<v.size() && v[i]==v[i+1]-1){
            i++;
            count++;
           }
            
                maxi=max(maxi,count);
            
        }
        return maxi;
    }
};