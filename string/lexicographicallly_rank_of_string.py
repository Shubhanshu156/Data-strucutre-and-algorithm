from math import factorial

# Python program to find lexicographic
# rank of a string

# A utility function to find factorial
# of n
def fact(n) :
	f = 1
	while n >= 1 :
		f = f * n
		n = n - 1
	return f
	
# A utility function to count smaller
# characters on right of arr[low]
def findSmallerInRight(st, low, high) :
	
	countRight = 0
	i = low + 1
	while i <= high :
		if st[i] < st[low] :
			countRight = countRight + 1
		i = i + 1

	return countRight
	
# A function to find rank of a string
# in all permutations of characters
def findRank (st) :
	ln = len(st)
	mul = fact(ln)
	rank = 1
	i = 0

	while i < ln :
		
		mul = mul // (ln - i)
		# count number of chars smaller
		# than str[i] from str[i + 1] to
		# str[len-1]
		countRight = findSmallerInRight(st, i, ln-1)

		rank +=countRight * mul
		i+=1
	return rank
	
	
# Driver program to test above function
st = "string"
print (findRank(st))

# This code is contributed by Nikita Tiwari.
