#include <iostream>
using namespace std;
class Solution {
    public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
   };
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            int l1=length(headA);
            int l2=length(headB);
    
            int d=0;
            
            ListNode* ptr1;
            ListNode* ptr2;
            if(l1>l2){
                d=l1-l2;
                ptr1=headA;
                ptr2=headB;
            }
            else{
                d=l2-l1;
                ptr1=headB;
                ptr2=headA;
            }
            while(d>0)
            {
                ptr1=ptr1->next;
                if(ptr1==NULL){
                    return NULL;
                }
                d--;
            }
            while(ptr1!=NULL && ptr2!=NULL)
            {
                if(ptr1==ptr2)
                {
                    return ptr1;
                }
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            return NULL;
        }
        int length(ListNode* head)
        {
            int l=0;
            ListNode* temp=head;
            while(temp!=NULL)
            {
                temp=temp->next;
                l++;
            }
            return l;
        }
    };
    
    