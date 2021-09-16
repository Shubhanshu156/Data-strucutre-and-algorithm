# BY same way we can sort stack

def sortnig(lst):
    if len(lst)==1:
        return
    else:
        sortnig(lst[0:len(lst)-1])
        val=lst[-1]
        lst.pop()
        insert(lst,val)
def insert(lst,val):
    if len(lst)==0 or max(lst)<=val:
        lst.append(val)
    else:
        newval=lst[-1]
        lst.pop()
        insert(lst,val)
        lst.append(newval)

lst=[0,1,5,2]
sortnig(lst)
print(lst)