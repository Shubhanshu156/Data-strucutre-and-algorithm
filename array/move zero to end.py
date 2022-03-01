def move(lst):
    cnt=0
    for i in range(len(lst)):
        if lst[i]!=0:
            lst[i],lst[cnt]=lst[cnt],lst[i]
            cnt+=1
    return lst
print(move([1,0,2,0,3,0,4,0,5,0]))