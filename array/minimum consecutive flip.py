# minimum flip to make same
# observation1 => the diffrence between grp of 1 and 0 will always 0 or 1
# observation2=> the grp which should be flip is second grp from start
# [0,0,1,1,0,0,1,1,0] in this case second grp is of 1 so 1 grps should be flip
def minzero(arr):
    l=len(arr)
    last=arr[0]
    for i in range(1,l-1):
        if arr[i-1]!=arr[i] and arr[i]==(not last):
            print("from ",i,end=" ")
        elif arr[i]!=arr[i+1] and arr[i]==(not last):
            print(i)
minzero([0,0,1,1,0,0,1,1,0])
