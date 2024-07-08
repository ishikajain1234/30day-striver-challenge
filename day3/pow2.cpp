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
double solve(double x,long long n){
    if(n==0)return 1;
    if(n<0)return solve(1/x,-n);
    if(n%2==0)return solve(x*x,n/2);
    else return x*solve(x*x,(n-1)/2);
}
    double myPow(double x, int n) {
        return solve( x,(long long)n);
    }
};