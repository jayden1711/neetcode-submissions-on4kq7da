# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        
        res = True

        #keep track of min node + 1 as a lower bound for right subtree
        #keep track of max node - 1 as an upper bound for left subtree

        def dfs(root, u_bound, l_bound):
            nonlocal res

            if not root:
                return


            

            if root.val >= u_bound or root.val <= l_bound:
                    res = False
                    return
            
            dfs(root.left, root.val, l_bound)
            dfs(root.right, u_bound, root.val)
            
        dfs(root, float('inf'), float('-inf'))
        return res
        

