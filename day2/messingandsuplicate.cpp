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

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n1=A.size();
    long long s1=(n1*(n1+1))/2;
    long long s2=(n1*(n1+1)*(2*n1+1))/6;
    long long s=0;
    long long s3=0;
    for(int i=0; i<n1; i++){
        s+=(long long)A[i];
        s3+=((long long)A[i]*(long long)A[i]);
    }
    long long val1=s-s1;
    long long val2=s3-s2;
    val2=val2/val1;
    long long y=0;
    long long x=0;
    x=(val1+val2)/2;
    y=x-val1;
    return {(int)x,(int)y};
}
