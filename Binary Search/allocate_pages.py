def isfeasible(arr,amt,k):
    cnt=1
    s=0
    for i in range(len(arr)):
        if s+arr[i]>amt:
            cnt+=1
            s=arr[i]
        else:
            s+=arr[i]
         
    return cnt<=k





def allocate_minimum_pages(arr,n,k):
    low=0
    high=n
    res=0
    low=max(arr) #max of array
    high=sum(arr) #sum of array
    while low<=high:
        mid=(low+high)//2      #how many user will it take to read pages of mid
        if isfeasible(arr,mid,k):   #if user can read pages of mid then 
            res=mid   #if user can read mid pages then our ans is mid and now we will check if user can 
            high=mid-1     #read [max(arr),mid-1]
        else:          #if user cant read these pages then we have to increase mid so 
            low=mid+1    #our mid will be [mid+1,sum(arr)]
    return res
arr=[10,5,20]
print(allocate_minimum_pages(arr,3,2))
# nlogn
