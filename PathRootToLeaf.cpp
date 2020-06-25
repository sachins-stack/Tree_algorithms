int sum=0;
// vector<int> res;
void dfs(TreeNode* root,int currentSum){
    currentSum=currentSum*10+root->val;
    if(!root->right && !root->left){ //res.push_back(currentSum);
                                    sum+=currentSum; }
    if(root->left) dfs(root->left,currentSum);
    if(root->right) dfs(root->right,currentSum);
    return ;
}
int sumNumbers(TreeNode* root) {
    if(!root) return 0;
    dfs(root,0);
    //for(auto a:res) cout<<a<<" ";
    return sum;
}