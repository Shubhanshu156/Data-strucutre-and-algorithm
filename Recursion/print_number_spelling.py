lst=['zero','one','two','three','four','five','six','seven','eight','nine']
def number(n):
    if n<10:
        return lst[n]
    i=n%10
    return(number(n//10)+" "+lst[i])
print(number(12))
