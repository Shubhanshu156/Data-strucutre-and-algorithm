#given a wall of size 2XN and tiles of size 1X2 and 2X1 in how many ways you can build walls
# if we take a horizontal tile then area left will be n-2 and if we take vertical tile then n-1 area is left
# for horizontal


def tile(n):
    dp=[0]*(n+1)
    dp[1]=1
    dp[2]=2
    for i in range(3,n+1):
        dp[i]=dp[i-1]+dp[i-2]
    return (dp[n])
print(tile(4))