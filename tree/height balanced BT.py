class Node:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None
class Height:
    def __init__(self):
        self.h=0
def isbalance(self,height):
    lh = Height()
    rh = Height()
    if self is None:
        height.h=0
        return 0
    else:
        if self.left==None:

            if abs(lh.h-rh.h)<=1:
                return 1*isbalance(self.right,rh)
            else:
                return 0
        if self.right==None:

            if abs(lh.h-rh.h)<=1:
                return 1*isbalance(self.left,lh)
            else:
                return 0
        else:

            if abs(lh.h-rh.h)<=1:
                return 1*(isbalance(self.left,lh)*isbalance(self.right,rh))
            else:
                return 0
'''  
def balance(self,h):
    if self==None:
        return 1
    else:
        if self.left==None:
            lh=0
            rh=height(self.right)
            if abs(lh-rh)<=1:
                return 1*balance(self.right,rh)
            else:
                return 0
        if self.right==None:
            rh=0
            lh=height(self.left)
            if abs(lh-rh)<=1:
                return 1*balance(self.left,lh)
            else:
                return 0
        else:
            lh=height(self.left)
            rh=height(self.right)
            if abs(lh-rh)<=1:
                return 1*(balance(self.left)*balance(self.right))
            else:
                return 0
'''
'''
def height(self):
	if self==None:
		return 0
	h1=height(self.left)
	h2=height(self.right)
	return max(h1,h2)+1
'''
def check(self):
    h=Height()
    print(isbalance(self,h))
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.left.left=Node(5)

(check(root))