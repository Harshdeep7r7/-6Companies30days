class Node
{
        public:
        bool terminate;
        map<char,Node*> mp;

        Node()
        {
            terminate=false;
        }

};

class trie
{   public:
    Node *root;
    trie()
    {
        root=new Node;
    }
    void insert(string s)
    {
        Node *curr=root;

        int i=0;
        while(i<s.length())
        {
              if(!curr->mp.count(s[i]))
                curr->mp[s[i]]=new Node;

                curr=curr->mp[s[i]];
                i++;
        }
        curr->terminate=true;
    }
     Node * search(string s)
    {

        int i=0;
        Node *curr=root;


        while(i<s.length())
        {
               if(curr->mp.count(s[i])==0)
                return NULL;

            curr=curr->mp[s[i]];
            i++;
        }
       return curr;
    }
    void printhelper(string s,Node *curr,vector<string> &sol )
    {

        if(curr->terminate)
            sol.push_back(s);

        for(auto x:curr->mp)
        printhelper(s+x.first,x.second,sol);

    }
    vector<string> print(string p)
    {   
        vector<string> sol;
        Node *curr=search(p);
        if(curr)
        {
           printhelper(p,curr,sol);
        }
        if(!sol.size())
        sol.push_back("0");
        
        return sol;
    }
};
class Solution{
public:

    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> sol;
        trie t;
        for(int i=0;i<n;i++)
        t.insert(contact[i]);
        
        
        string temp="";
        for(int i=0;i<s.length();i++)
        {   temp+=s[i];
            sol.push_back(t.print(temp));
        }
        
        return sol;
    }
};
