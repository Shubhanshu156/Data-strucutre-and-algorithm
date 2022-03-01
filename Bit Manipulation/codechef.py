def countsetbits(n):
        num=n
        cnt = 0
        while (n > 0):
             if ((n & 1) > 0):
                 cnt += 1

             n = n >> 1
        print(cnt)
        cnt=0
        #  Approach 2
        # https:www.geeksforgeeks.org/count-set-bits-in-an-integer/ (Brian Kernighan’s Algorithm)
        n=num
        while(n>0):
            cnt+=1
            n=n&(n-1)        
        print(cnt)
print(countsetbits(5))
        

