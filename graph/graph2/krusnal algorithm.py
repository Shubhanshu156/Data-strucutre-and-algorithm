def find(n):
    while 1:  # this is iterative version 
        if lst[n]<0:  # if n is negative means it is lst so directly return n
            return n
        else:
            while lst[n]>=0:   # check till n is negative means it is lst 
                n=lst[n]
 
def merge(a,b):  # merginf(union) by union by rank
    if a>b: # if rank of a is greate than b then add a to b
        lst[a]+=lst[b]
        lst[b]=a
    else:      # else add b to a
        lst[b]+=lst[a]
        lst[a]=b
 
n,m=map(int,input().split())  
mainlst=[]
lst=[-1]*n  # create a lst of -1
for i in range(m):
    a,b,w=map(int,input().split())   
    mainlst.append([w,a,b])
mainlst.sort() # for krusnal algorithm we have to first sort our inout on the basis of weight input
sum=0 # sum var for storing sum

for w,a,b in mainlst:
    a-=1 # subtracting -1 because in code indexing start from 0 not from 1
    b-=1
    p1=find(a) # find lst of both a,b
    p2=find(b)
    if p1!=p2:   # if both have diffrent lst then merge or union them
        merge(p1,p2)
        sum+=w
print(sum)