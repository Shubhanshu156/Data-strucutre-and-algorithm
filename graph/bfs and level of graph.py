def bfs(node):
    queue.append(node)
    vis[node]=1 # appending a node to queue from which traversal should start
    while queue:#running loop over queue until queue is not empty
        s=queue.pop(0)
        print(s,end=" ")
        for element in adj[s]:
            if vis[element]==0:
                queue.append(element)
                lvl[element]=lvl[s]+1 # level of element will be level of node+1
                vis[element]=1
vis=[0]*4
lvl=[0]*4
queue=[]
adj=[[],[],[],[],[]]
adj[0].append(1)
adj[1].append(0)
adj[0].append(2)
adj[2].append(0)
adj[1].append(2)
adj[2].append(1)
adj[2].append(0)
adj[0].append(2)
adj[2].append(3)
adj[3].append(2)
adj[3].append(3)
lvl[0]=0 #lst for storing level of diffrent nodes
bfs(0)
print(lvl)

