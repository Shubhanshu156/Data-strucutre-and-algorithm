def delete(stack,k,cnt):
    if cnt==k:
        stack.pop()
    else:
        val=stack[-1]
        stack.pop()
        delete(stack,k,cnt+1)
        stack.append(val)
stack=[0,1,2,3,4]
delete(stack,len(stack)/2,0)
print(stack)