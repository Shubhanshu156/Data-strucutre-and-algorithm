class node:
    def __init__(self,data):
        self.left=None
        self.right=None
        self.data=data
def sumreplacment(self):
    if self==None:
        return 
    sumreplacment(self.left)
    sumreplacment(self.right)
    if self.left!=None:
        self.data+=self.left.data
    if self.right!=None:
        self.data+=self.right.data


def sumreplacment(self):
    if self==None:
        return 0
    leftsum=sumreplacment(self.left)
    print(self.data)
    rightsum=sumreplacment(self.right)
    a=self.data
    b=leftsum
    c=rightsum
    
    self.data=a+b+c
    
    return self.data
 
    
def printPreorder(root):
 
    if root:
 
        # First print the data of node
        print(root.data)
 
        # Then recur on left child
        printPreorder(root.left)
 
        # Finally recur on right child
        printPreorder(root.right)
root=node(1)
root.left=node(2)
root.right=node(3)
root.left.left=node(4)
root.left.right=node(5)
(sumreplacment(root))    
printPreorder(root)