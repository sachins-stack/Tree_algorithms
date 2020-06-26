//check symmetry of the tree by iterative or recursive(dfs) method
//check if some tree is part of tree (subtree)

bool dfs(TreeNode* node1 , TreeNode* node2){
    if(node1==NULL && node2==NULL) return true;
    if(node1==NULL || node2==NULL ) return false;
    if(node1->val == node2->val) return dfs(node1->left,node2->right) && dfs(node1->right,node2->left);
    return false;
}
bool isSymmetric(TreeNode* root) {
        if(!root) return true;
//         queue<TreeNode*> q;
//         q.push(root->left);
//         q.push(root->right);
//         while(!q.empty()){
//             TreeNode* node1=q.front(); q.pop();
//             TreeNode* node2=q.front(); q.pop();
//             if(node1==NULL && node2==NULL) continue;
//             if(node1==NULL || node2==NULL ) return false;
//             if(node1->val != node2->val) return false;
//             q.push(node1->left);
//             q.push(node2->right);
//             q.push(node1->right);
//             q.push(node2->left);
        
//         }
//         return true;
//for checking subtree
//    return dfs(s,t) || isSymmetric(s->left,t) || isSymmetric(s->right,t);
//
    return dfs(root->left,root->right);
}