class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void serializeUtil(Node *root,vector<int> &sol)
    {
        if(!root)
        {sol.push_back(-1);
        return;
            
        }
        
        sol.push_back(root->data);
        serializeUtil(root->left,sol);
        serializeUtil(root->right,sol);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int> sol;
        serializeUtil(root,sol);
        return sol;
    }
    
    //Function to deserialize a list and construct the tree.
    int i=0;
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
        if(A[i]==-1)
        {   i++;
            return NULL;
        }
        Node *root=new Node(A[i++]);
        
        root->left=deSerialize(A);
        root->right=deSerialize(A);
        
        return root;
    }

};
