def dijsktra():
    q.append([0,1]) # adding for source element i.e 1
    dist[0]=0 # as we have start indexing from 1 so to avoid make 0 dist 0 and 1 distance 0
    dist[1]=0
    while q:
        q.sort()        # sorted so we can pick lowest weight
        distance=q[0][0]  # distance of current node and node
        curr=q[0][1]
        q.pop(0)
        for node,wight in adj[curr]:
            if distance+wight<dist[node]:  # if distance of that node is less than diffrent path so we replace that [ath woth lowest value path]
                dist[node]=distance+wight  # distance of that node is distnace of current node + weight of next node
                q.append([dist[node],node])   # and finally append that node whose distnace is replaced 



"XXXXXXXXXXXXXXXXXXXXXXXXXX IT IS SAME AS BFS XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"



    
q=[]
n,m=map(int,input().split())
dist=[10000000000]*(n+1) # distnace array for storing shortest distnce from source here source is 1
adj=[]
for _ in range(n+1):
    adj.append([])
for M in range(m):
    a,b,w=map(int,input().split())
    adj[a].append([b,w])
    adj[b].append([a,w])
dijsktra()
print(dist)
'''
6 9
1 2 4
1 6 2
2 3 5
2 6 1
6 3 8
6 5 10
3 4 6
3 5 3
5 4 5

1, 4, 3, 8, 14, 11, 2]
'''