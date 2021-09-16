
def grammer(n,k):
    if (n==1):

        
        return 0;
        # /* code */
    
    mid=int(pow(2,n-1)/2)
    if (k<=mid):
    
        return grammer(n-1,k);
        # /* code */
    
    else:
    
        rem=k%mid;
        return 1-grammer(n-1,rem)
        # /* code */
print(grammer(4,5))