# given array find majority element in array
# majority mean count is greater than n/2
# arr=[6,8,4,8,8]
# count=1 res=6
# i=1:count=0 res=0->>count=1 and res=8
# i=2 count=0 res=8->>count=1 and res=4
# i=3 count=0 res=4->>count=1 and res=8
# i=4 count=2 res=8 
# if cnt is zero then res will be ele at i and cnt is 1
def findmaxcount(arr,l):
    cnt=1
    res=arr[0]
    for i in range(1,l):
        if arr[i]==res:
            cnt+=1
        else:
            cnt-=1
        if cnt==0:
            cnt=1
            res=arr[i]
    return res
def majority(arr,l):
    maxele=findmaxcount(arr,l)
    cnt=0
    for i in range(l):
        if arr[i]==maxele:
            cnt+=1
    if cnt>=l//2:
        return maxele
    else:
        return -1
print(majority([6,8,4,8,2],5))
        
