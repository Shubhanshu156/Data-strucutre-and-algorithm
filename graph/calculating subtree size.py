import sys
sys.setrecursionlimit(1000000000)

#calling dfs for each node then returning its size
def dfs(node):
	curr=1
	vis[node]=1
	for ele in adj[node]:
		if vis[ele]==0:
			curr+=dfs(ele)
            #calculating size of each tree 
	
	sub[node]=curr
	return curr# returning curr value








adj=[]
for x in range(8):
	adj.append([])
vis=[0]*8
sub=[0]*8
# for x in range(n):
# 	adj.append([])
# for _ in range(m):
# 	a,b=map(int,input().split())
# 	adj[a].append(b)
# 	adj[b].append(a)

dfs(1)
print(sub)