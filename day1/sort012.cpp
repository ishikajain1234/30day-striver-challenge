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

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
        int i=0,j=0,k=n-1;
        while(j<=k){
            if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j]==1){
               j++;
            }
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}