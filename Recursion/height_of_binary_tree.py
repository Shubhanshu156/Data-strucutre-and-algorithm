def recursion(n):
    if n<0:
        return
    else:
        print(n)
        recursion(n-1)

recursion(5)
