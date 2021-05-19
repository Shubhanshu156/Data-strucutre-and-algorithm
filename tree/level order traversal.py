class Node:
	def __init__(self,data):
		self.left=None
		self.right=None
		self.data=data
def levelorder():
	lst=[]
	lst.append(root)
	lst.append(None)
	while len(lst)!=0:
		node=lst[0]
		lst.pop(0)
		if node!=None:
			print(node.data)
			if node.left!=None:
				lst.append(node.left)
			if node.right!=None:
				lst.append(node.right)
		else:
			if len(lst)!=0:
				lst.append(None)
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
levelorder()


