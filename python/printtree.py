#-*- coding:utf-8 -*-
class TreeNode:
    """
    树的节点
    """
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def printTree(proot):
    queue = []
    if not proot:
            return
    queue.append(proot)
    while(len(queue) > 0):
            pnode = queue[-1]
            queue.pop()
            print(pnode.val)
            if(pnode.left):
                    queue.insert(0, pnode.left)
            if(pnode.right):
                    queue.insert(0, pnode.right)
if __name__ == "__main__":
    proot = TreeNode(8)
    proot.left = TreeNode(6)
    proot.right = TreeNode(10)
    proot.left.left = TreeNode(5)
    proot.left.right = TreeNode(7)
    proot.right.left = TreeNode(9)
    proot.right.right = TreeNode(11)
    printTree(proot)


