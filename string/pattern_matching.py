 

def pattern_matching(txt, pattern):
    cnt = 0
    i = 0
    while i < (len(txt)-len(pattern)+1):
        if txt[i:i+len(pattern)] == pattern:
            cnt += 1
            i += len(pattern)
        else:
            i += 1
    return cnt


def pattern_matching_improve(txt, pattern):  # all element are distinct
    i = 0
    cnt = 0
    while i <= len(txt)-len(pattern):
        for j in range(len(pattern)):
            if pattern[j] != txt[i+j]:
                break
        if j == len(pattern)-1:
            cnt += 1
            i += 1
        elif j == 0:
            i += 1
        else:  # pattern is match upto j index of pattern and not match at j+1 so we will increment i by j
            i += j
    return cnt


'''Rabin Karp Algorithm'''
# Following program is the python implementation of
# Rabin Karp Algorithm given in CLRS book

# d is the number of characters in the input alphabet
d = 256

# pat -> pattern
# txt -> text
# q -> A prime number


def Rabin_Karp_algor(pat, txt, q):
	M = len(pat)
	N = len(txt)
	i = 0
	j = 0
	p = 0  # hash value for pattern
	t = 0  # hash value for txt
	# The value of h would be "pow(d, M-1)%q"
	h = 1;h=(d**(M-1))%q

	# Calculate the hash value of pattern and first window
	# of text
	for i in range(M):
		p = (d*p + (ord(pat[i])))%q
		t = (d*t + (ord(txt[i])))%q

	# Slide the pattern over text one by one
	for i in range(N-M+1):
		# Check the hash values of current window of text and
		# pattern if the hash values match then only check
		# for characters on by one
		if p==t:
			# Check for characters one by one
			for j in range(M):
				if txt[i+j] != pat[j]:
					break
				else: j+=1

			# if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
			if j==M:
				print ("Pattern found at index " + str(i))

		# Calculate hash value for next window of text: Remove
		# leading digit, add trailing digit
		if i < N-M:
			t = (d*(t-ord(txt[i])*h) + ord(txt[i+M]))%q

			# We might get negative values of t, converting it to
			# positive
			if t < 0:
				t = t+q

# Driver Code
txt = "GEEKS FOR GEEKS"
pat = "GEEK"

# A prime number
q = 101

# Function Call
Rabin_Karp_algor(pat,txt,q)



    


# print(pattern_matcing_r("abdabcbabc",'abc'))