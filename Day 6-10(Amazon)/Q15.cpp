void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here

         Node *curr=head;

         while(curr)
         {
             int j=1;
             while(curr->next&&j<M)
             {
                 curr=curr->next;
                 j++;
             }
             Node *temp=curr->next;

             int k=1;
             while(temp&&k<=N)
             {
                 Node *t=temp->next;
                 delete temp;
                 temp=t;
                 k++;
             }
             curr->next=temp;
             curr=curr->next;
         }


    }
