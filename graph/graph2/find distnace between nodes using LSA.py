from math import*
import math
#this is for tree not for graphs
# code to find distance between two nodes using fact that distance betwwen two nodes  is addition of level
#of both level and subtract 2*lca of them
#dist=level[a]+level[b]-lca(a,b) this is major intutiation behind this code
def getLCA(a,b):
    global LCA,maxn
    if level[b]<level[a]:
        a,b=b,a
    d=level[b]-level[a]
    while d>0:
        steps=int(log2(d))
        b=LCA[b][steps]
        d=d-(2**steps)
    if a==b:
        return a
    for i in range(maxn,-1,-1):
    #while LCA[a][0]!=LCA[b]=0:
        if LCA[a][i]!=-1 and LCA[a][i]!=LCA[b][i]:
            a=LCA[a][i]
            b=LCA[b][i]
    return LCA[a][0]
def dfs(node,parent,lvl):
    level[node]=lvl
    LCA[node][0]=parent
    for child in adj[node]:
        if child!=parent:
            dfs(child,node,lvl+1)
        

def sparsetable():
    global n,maxn
    dfs(1,-1,1)
    for i in range(1,maxn+1):
        for j in range(1,n):
            if LCA[j][i-1]!=-1: 
                par=LCA[j][i-1]
                LCA[j][i]=LCA[par][i-1]



n,m=map(int,input().split())
maxn=int(log2(n))
adj=[]
LCA=[]
level=[]
for x in range(0,n+1):
    LCA.append([-1]*(maxn+1))
    adj.append([])
    level.append(0)
for _ in range(m):
    a1,b1=map(int,input().split())
    adj[a1].append(b1)
    adj[b1].append(a1)
sparsetable()
q=int(input())
for _ in range(q):
    a2,b2=map(int,input().split())
    l1=level[a2]
    l2=level[b2]
    print(l1+l2-2*getLCA(a2,b2))# 