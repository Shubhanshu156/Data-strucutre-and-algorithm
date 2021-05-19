class Node:
	def __init__(self,data):
		self.left=None
		self.right=None
		self.data=data
def sum(k):
	s=0
	level=0
	lst=[]
	lst.append(root)
	lst.append(None)
	while len(lst)!=0:
		node=lst[0]
		lst.pop(0)
		if node!=None:
			print(node.data)
			if level==k:
				s+=node.data
			if node.left!=None:
				lst.append(node.left)
			if node.right!=None:
				lst.append(node.right)
		else:
			level+=1

			if len(lst)!=0:
				lst.append(None)
	print(s)
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
sum(2)


