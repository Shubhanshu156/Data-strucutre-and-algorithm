def kahan():
    global count
    for index1,ele in enumerate(indegree):
        if index1==0:
            continue        
        if ele==0:
            q.append(index1)
    while q:
        for node in q:
            for elements in adj[node]:
                indegree[elements]-=1
                if indegree[elements]==0:
                    q.append(elements)
            ans.append(node)
            q.remove(node)

q=[]
ans=[]
count=0
n,m=map(int,input().split())
adj=[]
indegree=[0]*(n+1)
for _ in range(n+1):
    adj.append([])
for x in range(m):
    a,b=map(int,input().split())
    adj[a].append(b)
for index,lst1 in enumerate(adj):

    for elements in lst1:
        indegree[elements]+=1

kahan()
if len(ans)==0:
    print("Sandro fails")
else:
    print(*ans)