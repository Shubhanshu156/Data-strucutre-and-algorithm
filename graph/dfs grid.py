def is_valid(x,y):
    if 1<=x<=row and 1<=y<=column and vis[x][y]==0:
        return True
    else:
        return False
#choose any method what you want
def dfs(x,y):
    dx=[1,0,-1,0]
    dy=[0,1,0,-1]
    for i in range(0,4):
        if is_valid(x+dx[i],y+dy[i]):
            dfs(x+dx[i],y+dy[i])


def dfs(x,y):
    vis[x][y+1]=1
    dx=[1,0,-1,0]
    dy=[0,1,0,-1]
    if is_valid(x+1,y):
        #vis[x+1][y]=1
        dfs(x+1,y)
    if is_valid(x,y+1):
        dfs(x,y+1)
    if is_valid(x-1,y):
        #vis[x-1][y]=1
        dfs(x-1,y)
    if is_valid(x,y-1):
        #vis[x][y]=1
        dfs(x,y-1)
    return
row,column=map(int,input().split())
vis=[[0]*(column+1)]*(row+1)
dfs(1,1)