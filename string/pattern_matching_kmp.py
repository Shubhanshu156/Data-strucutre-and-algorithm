

def lps_array(s):
    lps=[0]*len(s)      #time complexity>>>O(n)
    n=len(s)
    le=0
    i=1
    while i<n:
        if s[i]==s[le]:
            le+=1
            lps[i]=le
            i+=1
        elif s[i]!=s[le]:
            if lps[le]==0:
                lps[i]=0
                i+=1
            else:
                # le-=1
                le=lps[le-1]
    return lps

def pattern_matching(txt,pattern):
    # pattern matching using kmp algorithm
    # first we will create lps array (longest prefix suffix array)
    lps=lps_array(pattern)
    print(*lps)
    i=0
    j=0
    n=len(txt)
    m=len(pattern)
    while i<n:
        if pattern[j]==txt[i]:
            i+=1
            j+=1
        if j==m:
            print(i-j)
            j=lps[j-1]
        elif i<n and pattern[j]!=txt[i]:
            if j==0:
                i+=1
                j+=1
            else:
                j=lps[j-1]
pattern_matching("ababcababaad","ababa")