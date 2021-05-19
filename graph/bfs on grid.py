def is_valid(x,y):
    if 1<=x<=row and 1<=y<=column and vis[x][y]==0 :
        return True
    else:
        return False

def bfs(srcx,srcy):
    dx=[1,0,-1,0] # these are list for storing direction in which we have to move
    dy=[0,1,0,-1] #in this we are moving in only four direction up down left right
    q.append([srcx,srcy]) #adding srcx,srcy to queue and mark them visited
    vis[srcx][srcy]=1
    while q:
        #print(srcx,srcy)
        currx=q[0][0] # now fetch x and y from queue
        curry=q[0][1]
        q.pop(0)  # pop that from queue
        for i in range(4):
            if is_valid(currx+dx[i],curry+dy[i]): # now move to all four direction which are valid
                newx=currx+dx[i]   
                newy=curry+dy[i]
                dis[newx][newy]=dis[currx][curry]+1 # as same as bfs on graph mark the distance as distance of parent +1
                vis[newx][newy]=1
                q.append([newx,newy]) #append them to queue 
def prn(dis):
    for x in range(1,len(dis)):
        print(*dis[x][1:])
arr=[[0, 1, 2, 3, 4], [0, 1, 2, 3, 4], [0, 1, 2, 3, 4], [0, 1, 2, 3, 4], [0, 1, 2, 3, 4]]
row=5
column=5
q=[]
dis=[]
vis=[]
for c in range(6):
    dis.append([0]*6)
    vis.append([0]*6)
bfs(1,1)
prn(dis)