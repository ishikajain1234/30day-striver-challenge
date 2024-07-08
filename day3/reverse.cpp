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
int count=0;
void merge(vector<int>&nums,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int>arr;
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            arr.push_back(nums[left]);
            left++;
        }
        else {
            arr.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        arr.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        arr.push_back(nums[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
      nums[i]=arr[i-low];
    }
}
void countpair(vector<int>&nums,int low,int mid,int high){
    int right=mid+1;
    for(int i=low; i<=mid; i++){
          while(right<=high && nums[i]>2LL*nums[right]){
            right++;
          }
          count+=(right-(mid+1));
    }
}
void mergesort(vector<int>&nums,int low,int high){
    if(low>=high)return;
    int mid=(low+high)/2;
    mergesort(nums,low,mid);
    mergesort(nums,mid+1,high);
    countpair(nums,low,mid,high);
    merge(nums,low,mid,high);
}
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        count=0;
         mergesort(nums,0,n-1);
         return count;
    }
};