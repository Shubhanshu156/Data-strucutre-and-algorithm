class Solution:
        
    def reverse(self,lst,i,j):
        while i<j:
            lst[i],lst[j]=lst[j],lst[i]
            i+=1
            j-=1
    def rotate(self, lst, k) -> None:
            k=k%len(lst)
            # for right rotate
            self.reverse(lst,0,len(lst)-1)
            self.reverse(lst,0,k-1)
            self.reverse(lst,k,len(lst)-1)
            
            
            # for left rotate
            # self.reverse(lst,0,k-1)
            # self.reverse(lst,k,len(lst)-1)
            # self.reverse(lst,0,len(lst)-1)


            
            

        
a=Solution()
a.rotate([-1],2)