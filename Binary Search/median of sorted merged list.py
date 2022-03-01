INT_MAX=float('inf')
INT_MIN=-float('inf')

def median(arr1,arr2,n1,n2):
    low=0
    high=len(arr1)
    while low<=high:
        i1=(low+high)//2
        i2=((n1+n2+1)//2)-i1
        max1=INT_MIN if i1==0 else arr1[i1-1] 
        max2=INT_MIN if i2==0 else arr2[i2-1] 
        min1=INT_MAX if i1==n1 else arr1[i1]
        min2=INT_MAX if i2==n2 else arr2[i2]

        if max1<=min2 and max2<=min1:      #if all element in left side are less than right side 
            if (n1+n2)%2==0:               #if all merged list is even so we have to return max of them 
                return max(max1,max2)
            else:
                return (max(max1,max2)+min(min1,min2))//2     #if merged lst is odd we have to return avg of both
        elif max1>min2:                     #if index of max1 is greater then we have to shift to left side
            high=i1-1   
        else:
            low=i1+1
print(median([30,40,50,60],[5,6,7,8,9],4,5))
# print(max(INT_MIN,9))

