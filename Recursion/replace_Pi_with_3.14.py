# 'xpihpilmpi'-->x3.14h3.14l3.14m3.14
def convert(s,i):
    if i==len(s)-1 or (i==len(s)-2 and s[i]=='p' and s[i+1]!='i'):
        return
    if s[i]=='p' and s[i+1]=='i':
        s[i:i+2]=['3','.','1','4']
    convert(s,i+1)
a=list('xpihpilmpi')
print(convert(a,0))
print(a)