# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        
        if not root:
            return []
        q = []
        lor = []
        q.append(root)
        level = 0

        while q:
            len_q = len(q)
            lor.append([])
            for _ in range(len_q):
                  
                node = q.pop(0)
                lor[level].append(node.val)
                
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)    
            level+=1

        res = []
        for level_list in lor:
            res.append(level_list[-1])

        return res

        