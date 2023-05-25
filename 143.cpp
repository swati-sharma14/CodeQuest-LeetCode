
class Solution {
public:

    void reorderList(ListNode* head) {
        
      vector<int>v;
      ListNode *ptr = head, *ptr2 = head;

      while(ptr != NULL)
      {
          v.push_back(ptr->val);
          ptr = ptr->next;
      }


      int l = 0, r = v.size()-1;
      int turn = 0;

      while(ptr2!=NULL && l <= r)
      {

       if(turn == 0) ptr2->val = v[l++];

       else ptr2->val = v[r--];

       ptr2 = ptr2->next;
       turn ^= 1;

      }
      
      return;
      
    }
};
