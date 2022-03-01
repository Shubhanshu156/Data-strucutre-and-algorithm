# find maximum subarray with even odd in alternate
def find(arr,l):
    cnt=1
    res=1
    for i in range(1,l):
        if (arr[i-1]%2==0 and arr[i]%2!=0) or (arr[i-1]%2!=0 and arr[i]%2==0):
            cnt+=1
            res=max(cnt,res)
        else:
            cnt=1
    return res
print(find([5,10,20,6,3,8],6))