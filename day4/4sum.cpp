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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>c;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1; j<n; j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long long sum=nums[j];
                    sum+=nums[r];
                    sum+=nums[i];
                    sum+=nums[l];
                    if(sum<target)l++;
                    else if (sum>target){
                        r--;
                    }
                    else{
                        vector<int>temp={nums[i],nums[j],nums[r],nums[l]};
                        sort(temp.begin(),temp.end());
                        c.push_back(temp);
                         while(l<r && nums[r]==nums[r-1])r--;
                     while(l<r && nums[l]==nums[l+1])l++;
                        l++;
                        r--;
                    }
                    
                   
                }
            }
        }
        return c;
    }
};