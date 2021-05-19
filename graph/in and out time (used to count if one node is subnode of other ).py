def dfs(node):
	global timer
	
	for elements in adj[node]:
		if visited[elements]==False:
			timer+=1
			intime[elements]=timer
			visited[elements]=True
			dfs(elements)
	
	timer+=1
	outime[node]=timer





intime=[]
outime=[]
# if there are not connected componenets
def dfscall():
	for x in range(1,n):
		if visited[x]==False:
			visited[x]=True
			intime[x]=timer
			dfs(x)



n,m=map(int,input().split())
adj=[]
intime=[-1]*(n+1)
outime=[-1]*(n+1)
for _ in range(n+1):
	adj.append([])

timer=1
for x in range(m):
	a,b=map(int,input().split())
	adj[a].append(b)
	adj[b].append(a)
visited=[False]*(n+1)
dfscall()
print(intime,outime)
# used to count if one node is subnode 
# of other or not is intime and outime is greater than it is else no