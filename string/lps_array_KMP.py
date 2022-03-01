def lps_array(s,lps):      #time complexity>>>O(n)
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
    print(lps)
print(lps_array("aaabaaaac",[0]*9))