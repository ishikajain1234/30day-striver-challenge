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

#include <bits/stdc++.h> 

long long count = 0;

int merge(long long* arr, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    std::vector<long long> temp(high - low + 1);
    int k = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[k++] = arr[left++];
        } else {
            temp[k++] = arr[right++];
            count += (mid - left + 1); 
        }
    }

    while (left <= mid) {
        temp[k++] = arr[left++];
    }

    while (right <= high) {
        temp[k++] = arr[right++];
    }

    for (int i = 0; i < k; i++) {
        arr[low + i] = temp[i];
    }
    return count;
}
int  mergesort(long long* arr, int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    count+=mergesort(arr, low, mid);
    count+=mergesort(arr, mid + 1, high);
    count+=merge(arr, low, mid, high);
    return count;
}

long long getInversions(long long *arr, int n) {
 // Reset the count
   return  mergesort(arr, 0, n - 1);
        
}
