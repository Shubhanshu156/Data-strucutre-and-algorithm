# # Prefix sum
# # given array find sum of element form l to r
# def prefix(arr,l,r):
#     preix=[]
#     su=0
#     for i in arr:
#         su+=i
#         preix.append(su)
#     print(preix)
#     if l==0:
#         return prefix[r]
#     return preix[r]-preix[l-1]
# print(prefix([2,8,3,9,6,5,4],1,3))

# given an array find if there is equilibrium point in array
# find left_sum and right_sum if left_sum =right_sum at any point that is answer
# right sum at any point is total_sum-left_sum
def findequilibrium(arr):
     s=sum(arr)  #sum of array
     left_sum=0
     for i in range(len(arr)):
        if left_sum==s-arr[i]:
            return i
        left_sum+=arr[i]
        s-=arr[i]     #subtracting element to get right sum from 
     return False
print(findequilibrium([1,2,3,4,1,10]))
