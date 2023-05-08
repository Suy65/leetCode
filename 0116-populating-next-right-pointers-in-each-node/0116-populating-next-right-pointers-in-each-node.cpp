/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return 0;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node *prev = NULL;
            int size =q.size();
            while(size--){
                Node *temp =q.front();
                q.pop();
                
                if(temp ->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                if(prev != NULL){
                    prev->next =temp;
                    
                }
                prev = temp;
                
            }
            prev->next=NULL;
        }
        return root;
    }
};