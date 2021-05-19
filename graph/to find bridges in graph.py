import itertools
def dfs(node,parent):
        global timer
        vis[node]=True
        In[node]=low[node]=timer
        timer+=1
        for child in adj[node]:
            if child==parent:
                continue
            if vis[child]==True:
                # this is an backedge 
                low[node]=min(low[node],In[child])
                
            else:
                dfs(child,node)
                if low[child]>In[node]:
                    print(node,"-",child,"is a bridge")
                    low[node]=min(low[node],low[child])   

n,m=map(int,input().split())
adj=[]
for x in range(n+1):
    adj.append([])
for y in range(m):
    a,b=map(int,input().split())
    adj[a].append(b)
    adj[b].append(a)

In=[0]*(n+1)
low=[0]*(n+1)

timer=0
vis=[False]*(n+1)
dfs(1,None)