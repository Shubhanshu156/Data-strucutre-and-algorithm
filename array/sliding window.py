# '''
#  window Sliding technique
#                         '''
# # find consecutive subarray of given sum 

# arr=[1,8,30,-5,20,7]
# currsum=0
# k=3
# res=0
# for i in range(len(arr)):
#     if i<k:
#         currsum+=arr[i]      #sum of first window 
#     else:
#         res=max(currsum,res)
#         currsum=currsum-arr[i-1]+arr[i]
       
# print(res)

# check if subarray of given sum is present in array of positive element
#  add element to window and remove element until less than target
# def checksum(arr,target):
#     arr_sum=arr[0]
#     start=0
#     for i in range(1,len(arr)):
#         while arr_sum>target and start<len(arr)-1:
#             arr_sum-=arr[start]
#             start+=1
#         if arr_sum==target:
#             return True
#         if arr_sum<target:
#             arr_sum+=arr[i]
#     if arr_sum==target:
#         return True
#     return False
# print(checksum([4,1,20,5,10,3],15))
         
# # print n-bonacci number(sum of last n terms)
def nbonacci(n,k):
    arr=[]
    if n==k:
        return 1
    if n<k:
        return 0
    for i in range(k-1):
        arr.append(0)
    arr.append(1)
    curr_sum=sum(arr)
    arr.append(curr_sum)
    lastindex=0
    for i in range(0,n-k):
        curr_sum=curr_sum-arr[lastindex]+arr[-1]
        arr.append(curr_sum)
        lastindex+=1
    print(arr)
    return arr[n]
nbonacci(8,3)


    