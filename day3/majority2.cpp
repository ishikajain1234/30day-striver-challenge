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

vector<int> solve(vector<int>&nums){
    int n = nums.size();
    int cnt1 =0, cnt2 =0;
    int el1 = INT_MIN, el2 =INT_MIN;
    for(int i=0;i<n;i++){
        if(cnt1 == 0 && nums[i] != el2){
            cnt1 =1; el1 = nums[i];
        }
        else if(cnt2 ==0 && nums[i] != el1){
           cnt2 = 1; el2 = nums[i];
        }
        else if(el1 == nums[i]) cnt1++;
        else if(el2 == nums[i]) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }

vector<int>ans;
cnt1 = 0, cnt2 = 0;
for(int i=0;i<n;i++){
  if(el1 == nums[i]) cnt1++;
  if(el2 == nums[i]) cnt2++;
}
int mini = (int)(n/3)+ 1;
if(cnt1 >= mini) ans.push_back(el1);
if(cnt2 >= mini) ans.push_back(el2);

sort(ans.begin(),ans.end());

return ans;
}

    vector<int> majorityElement(vector<int>& nums) {
        return solve(nums);
    }
};