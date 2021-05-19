# Python3 program to find diameter of a binary tree
# using DFS.
import sys
sys.setrecursionlimit(1000000000)

# Sets maxCount as maximum distance from node.
#in this function we checking maximum distance from node and store in maxcount variable
def dfsUtil(node, count):
	global visited, x, maxCount, adj
	visited[node] = 1
	count += 1
	for i in adj[node]:
		if (visited[i] == 0):
			if (count >= maxCount):
				maxCount = count
				x = i
			dfsUtil(i, count)

# The function to do DFS traversal. It uses recursive
# dfsUtil()
def dfs(node, n):
	count = 0
	for i in range(n + 1):
		visited[i] = 0

	# Increment count by 1 for visited node
	dfsUtil(node, count)

# Returns diameter of binary tree represented
# as adjacency list.
def diameter(n):
	global adj, maxCount

	# DFS from a random node and then see
	# farthest node X from it*/
	dfs(1, n)

	# DFS from X and check the farthest node
	dfs(x, n)
	return maxCount

## Driver code*/
if __name__ == '__main__':
	n = 5

	# # Constructed tree is
	#	 1
	#	 / \
	#	 2 3
	# / \
	# 4 5 */
	adj, visited = [[] for i in range(n + 1)], [0 for i in range(n + 1)]
	maxCount = -10**19
	x = 0

	# create undirected edges */
	adj[1].append(2)
	adj[2].append(1)
	adj[1].append(3)
	adj[3].append(1)
	adj[2].append(4)
	adj[4].append(2)
	adj[2].append(5)
	adj[5].append(2)

	# maxCount will have diameter of tree */
	print ("Diameter of the given tree is ", diameter(n))

	# This code is contributed by mohit kumar 29
