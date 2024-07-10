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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* a=dummy;
        while(head1!=NULL && head2!=NULL){
            if(head1->val<head2->val){
                a->next=head1;
                a=a->next;
                head1=head1->next;
            }
            else{
                a->next=head2;
                head2=head2->next;
                a=a->next;
            }
        }
        while(head1!=NULL){
            a->next=head1;
            a=a->next;
            head1=head1->next;
        }
        while(head2!=NULL){
            a->next=head2;
            a=a->next;
            head2=head2->next;
        }
        return dummy->next;
    }
};