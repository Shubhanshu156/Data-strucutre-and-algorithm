# find the circular subarray with max sum
# a=[10,5,-5]
# noral subarray 
# [10],[5],[-5],[10,5],[5,-5],[10,5,-5]
# circular subarray
# [5,-5,10],[-5,10],[-5,10,5]


# explain
# first we will check normalsum and circular sum and then return max of them
# circular sum can be find using subtracting minsum of array from sum of array
# min sum of array can be find using inverting array sign and then find maximum for example
# [8,-4,3,-5,4]=>[-8,4,-3,5,-4]
# maximum sum subarray of inverted array is [4,-3,5]=>6 ans we inverted so minsum is(-6)
# arr=[8,-4,3,-5,4]
def normalmaxsum(arr,l):
    res=arr[0]
    maxending=arr[0]
    for i in range(1,l):
        maxending=max(arr[i],maxending+arr[i])
        res=max(res,maxending)
    return res
def overallMaxSum(arr,l):
    normalmax=normalmaxsum(arr,l) #first find maxsum subarray by kadane algo
    s=sum(arr) #then find sum of array
    if normalmax<0:
        return normalmax
    else:
        for i in range(l):
            arr[i]=-arr[i] #inverting sign to find minsum
        maxmin=-(normalmaxsum(arr,l))           #this is minimum sum in array 
    ans=s-maxmin     #subtracting to find max sum circular subarray
    return max(normalmax,ans) # ans will be maximum of normalsum and circular sum
arr=[8,-4,3,-5,4]
print(overallMaxSum(arr,len(arr)))



