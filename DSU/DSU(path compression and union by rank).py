def find(n):
    while 1:  # this is iterative version 
        if lst[n]<0:  # if n is negative means it is lst so directly return n
            return n
        else:
            while lst[n]>=0:   # check till n is negative means it is lst 
                n=lst[n]
 # adding comments
def merge(a,b):  # merginf(union) by union by rank
    if a>b: # if rank of a is greate than b then add a to b
        lst[a]+=lst[b]
        lst[b]=a
    else:      # else add b to a
        lst[b]+=lst[a]
        lst[a]=b
 
n,m=map(int,input().split())  
lst=[-1]*n  # create a lst of -1
for i in range(m):
    a,b=map(int,input().split())   
    a-=1 # subtracting -1 because in code indexing start from 0 not from 1
    b-=1
    p1=find(a) # find lst of both a,b
    p2=find(b)
    if p1!=p2:   # if both have diffrent lst then merge or union them
        merge(p1,p2)
'''

https://www.hackerearth.com/problem/algorithm/teachers-dilemma-3-00955296/
res=1
for i in range(0,len(lst)):
    if lst[i]<0:
        
        res=(res * abs(lst[i])) % 1000000007
print(res)
'''

'''
https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/owl-fight/
for i in range(int(input())):
    a,b=map(int,input().split())
    a-=1
    b-=1
    p1=find(a)
    p2=find(b)
    if p1==p2:
        print("TIE")
    elif p1>p2:
        print(a+1)
    else:
        print(b+1)
'''