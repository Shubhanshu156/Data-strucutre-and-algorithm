def convert(s,l,i):
    if i==len(s):
        return 0
    si=abs(48-ord(s[i]))
    num=si*10**(l-1)
    return(num+convert(s,l-1,i+1))

print(convert('123',3,0))