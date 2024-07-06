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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m+n-1;
        int p1=m-1;
        int p2=n-1;
        while(p1>=0 &&p2>=0 ){
            if(nums1[p1]<nums2[p2]){
                nums1[p]=nums2[p2];
                p--;
                p2--;
            }
            else{
                nums1[p]=nums1[p1];
                p--;
                p1--;
            }
        }
        while(p2>=0){
            nums1[p]=nums2[p2];
            p--;
            p2--;
        }
        return;
    }
};