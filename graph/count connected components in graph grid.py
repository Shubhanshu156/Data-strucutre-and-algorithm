
def is_valid(x,y):
    if 1<=x<=row and 1<=y<=column and vis[x][y]==0 and arr[x][y]==1:
        return True
    else:
        return False

cnt=0
def dfs(x,y):
    if is_valid(x+1,y):
        vis[x+1][y]=1
        dfs(x+1,y)
    if is_valid(x,y+1):
        vis[x][y+1]=1
        dfs(x,y+1)
    if is_valid(x-1,y):
        vis[x-1][y]=1
        dfs(x-1,y)
    if is_valid(x,y-1):
        vis[x][y]=1
        dfs(x,y-1)
    return
row,column=map(int,input().split())
vis=[[0]*(column+1)]*(row+1)
arr=[[0]*(column+1)]*(row+1)
for i in range(1,row+1):
    for j in range(1,column+1):
        if vis[i][j]==0 and arr[i][j]==1:
            dfs(i,j)
            cnt+=1
