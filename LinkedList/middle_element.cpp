#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    Node * fast = head, * slow = head;
    if(fast==NULL) return NULL;
    if(fast->next==NULL)return fast;
    if(fast->next->next==NULL) return fast->next;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    if(fast->next==NULL)return slow;
    return slow->next;
}