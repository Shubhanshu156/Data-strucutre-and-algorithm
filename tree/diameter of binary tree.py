class Node:
	def __init__(self,data):
		self.left=None
		self.right=None
		self.data=data
class Height:
	def __init__(self):
		self.h=0
'''
def diameter(self):
	if self==None:
		return 0
	leftheight=height(self.left)
	rightheight=height(self.right)
	diam=leftheight+rightheight+1
	leftdia=diameter(self.left)
	rightdia=diameter(self.right)
	return max(diam,leftdia,rightdia)
'''

 
 
def diameterOpt(root, height):
 
    # to store height of left and right subtree
    lh = Height()
    rh = Height()
 
    # base condition- when binary tree is empty
    if root is None:
        height.h = 0
        return 0
    
     
    # ldiameter --> diameter of left subtree
    # rdiamter  --> diameter of right subtree
     
    # height of left subtree and right subtree is obtained from lh and rh
    # and returned value of function is stored in ldiameter and rdiameter
     
    ldiameter = diameterOpt(root.left, lh)
    rdiameter = diameterOpt(root.right, rh)
 
    # height of tree will be max of left subtree
    # height and right subtree height plus1
 
    height.h = max(lh.h, rh.h) + 1
 
    # return maximum of the following
    # 1)left diameter
    # 2)right diameter
    # 3)left height + right height + 1
    return max(lh.h + rh.h + 1, max(ldiameter, rdiameter))
def diameter(root):
    height = Height()
    return diameterOpt(root, height)

def height(self):
	if self==None:
		return 0
	h1=height(self.left)
	h2=height(self.right)
	return max(h1,h2)+1
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
print(diameter(root))