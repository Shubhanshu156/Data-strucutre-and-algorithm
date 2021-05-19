def findparent(node):
    if node==parent[node]:  # in this case  node and parent are equal that means we have reached the root of set
        return node
                             # so this is parent
    else:
        return(findparent(parent[node]))

def union(a,b):             #function to merge two union set
    a=findparent(a)
    b=findparent(b)         #find parent of both if both are same that mean they belong to same set
                            #so return fom that function else make parent of b=a
    if a==b:
        return 
    parent[b]=a
n=int(input())
parent=[]

# for i in range(n+1):
#     a,b=map(int,input().split())
#     parent[a].append(b)
# print(findparent(int(input())))