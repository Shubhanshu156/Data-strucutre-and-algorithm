import sys
sys.setrecursionlimit(1000001)
 
def dfs(start,c):
	global foo
	vis[start]=1
	col[start]=c
	c=c^1
	for child in adj[start]:
		if vis[child]==0:
			dfs(child,c)
		else:
			if col[child]!=c:
				foo=1
			
			
 
 
for y in range(int(input())):
	n,m=map(int,input().split())
	adj=[]
	for i in range(n):
	    adj.append([])
	for i in range(m):
		a,b=map(int,input().split())
		adj[a-1].append(b-1)
		adj[b-1].append(a-1)
	col=[-1]*n # set color equal to -1 initially
	vis=[0]*n  #
	foo=0
	for i in range(n):# run a loop if there is dissconnected components 
		if vis[i]==0: # is node is not visited then run a dsf
			dfs(i,0)
	if foo==0:
		print('No suspicious bugs found!')
	else:
		print('Suspicious bugs found!')