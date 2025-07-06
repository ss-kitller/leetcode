
#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/* ----------------------------------------------------------------------- */


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode *prev = &dummy;  // prev pointeur qui pointe sur dummy -> 1er elt -> 2eme ->...
        
        while (prev->next && prev->next->next){
            ListNode *f = prev->next;
            ListNode *s = f->next;
            
            f->next = s->next;
            s->next = f;  // li hya nit dik lfirst l9dima
            prev->next = s;
            prev = f;  // 7itach aslan prev hwa li kay9ad lina f and s
        }
        return dummy.next;
    }
};





/* ----------------------------------------------------------------------- */




int main() {
    
}