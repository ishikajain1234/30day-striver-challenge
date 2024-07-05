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
    vector<vector<int>>v;
    for(int i=1; i<=n; i++){
           vector<int>a(i);
           v.push_back(a);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
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