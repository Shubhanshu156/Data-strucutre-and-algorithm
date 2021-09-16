

def insert(stack,ele):
    if len(stack)==0:
        stack.append(ele)
        return
    
    tmep=stack[-1]
    stack.pop()
    insert(stack,ele)
    stack.append(tmep)
def reverse(stack):
    if len(stack)==0:
        return
    else:
        temp=stack[-1]
        stack.pop()
        reverse(stack)
        insert(stack,temp)      
        return
a=[1,2,3,4,5]
# reverse(a)
insert(a,6)
print(a)