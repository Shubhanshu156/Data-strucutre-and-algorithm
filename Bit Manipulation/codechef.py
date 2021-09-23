for _ in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    arr.sort()
    ans=0
    for i in range(k):
        if arr[i]<0:
            val=-arr[i]
            ans+=val
    for j in range(n):
        if arr[j]>0:
            ans+=arr[j]
    print(ans)
