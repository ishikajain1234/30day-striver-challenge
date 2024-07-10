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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* dummy=new ListNode(-1);
        ListNode* a=dummy;
        int carry=0;
        while(temp1!=NULL && temp2!=NULL){
           int x=temp1->val;
           int y=temp2->val;
           int z=x+y+carry;
           int p=z%10;
            carry=z/10;
            ListNode* c=new ListNode(p);
            a->next=c;
            a=a->next;
            temp1=temp1->next;
            temp2=temp2->next;

        }
        while(temp1!=NULL){
            int x=temp1->val;
            int z=x+carry;
           int p=z%10;
           carry=z/10;
            ListNode* c=new ListNode(p);
            a->next=c;
            a=a->next;
             temp1=temp1->next;
           
        }
         while(temp2!=NULL){
            int x=temp2->val;
            int z=x+carry;
           int p=z%10;
            carry=z/10;
            ListNode* c=new ListNode(p);
            a->next=c;
            a=a->next;
             temp2=temp2->next;
        }
        if(carry!=0){
             ListNode* c=new ListNode(carry);
             a->next=c;
        }
        return dummy->next;
    }
};