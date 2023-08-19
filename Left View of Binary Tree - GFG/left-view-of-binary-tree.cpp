//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> leftView(struct Node *root);

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        vector<int> vec = leftView(root);
        for(int x : vec)
        cout<<x<<" ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends


/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

void levelOrder_stl(Node *root,vector<int>& vec)
{
    if (root == NULL) return;
 
    // Create an empty queue for
    // level order traversal
    queue<Node *> q;
     
    // to store front element of
    // queue.
    Node *curr;
 
    // Enqueue Root and NULL node.
    q.push(root);
    q.push(NULL);
    
    
   
    int start=1;
 
    while (1)
    {
        curr = q.front();
        q.pop();
         
        // condition to check
        // occurrence of next
        // level.
        if (curr == NULL)
        {
             if(q.size()==0)
                   {
                      break;
                   }
                   
                   
           q.push(NULL);
            start=1;
        }
         
        else {
            
             if(start==1)
                 {
                   vec.push_back(curr->data);
                     
                   start=0;
                  
                 }
                 
             
            // pushing left child of
            // current node.
            if(curr->left)
            {
                
                 q.push(curr->left);
             
            }
            
            // pushing right child of
            // current node.
            if(curr->right)
            q.push(curr->right);
             
           
        }
    }
}

vector<int> leftView(Node *root)
{
   vector<int>vec;
   
  
   
 levelOrder_stl(root,vec);
 return vec;
   
}
