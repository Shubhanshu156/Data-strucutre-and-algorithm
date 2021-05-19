class Node:
	def __init__(self,data):
		self.left=None
		self.right=None
		self.data=data
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
print(height(root))