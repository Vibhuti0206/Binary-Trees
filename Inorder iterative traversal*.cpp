void inOrder(struct Node *root) 
{ 
    stack<Node *> s; 
    Node *curr = root; 
  
    while (curr != NULL || s.empty() == false) 
    { 
       
        while (curr !=  NULL) 
        { 
            /* place pointer to a tree node on 
               the stack before traversing 
              the node's left subtree */
            s.push(curr); 
            curr = curr->left; 
        } 
  
      
        curr = s.top(); 
        s.pop(); 
  
        cout << curr->data << " "; 
  
      
        curr = curr->right; 
  
    } 
} 
