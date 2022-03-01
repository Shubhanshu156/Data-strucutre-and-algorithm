# Python 3 program to find maximum occurred
# element in given N ranges.

MAX = 1000000

# Return the maximum occurred element
# in all ranges.
def maximumOccurredElement(L, R, n):
	
	# Initialising all element of array to 0.
	arr = [0 for i in range(MAX)]

	# Adding +1 at Li index and substracting 1
	# at Ri index.
	for i in range(0, n, 1):
		arr[L[i]] += 1
		arr[R[i] + 1] -= 1

	# Finding prefix sum and index
	# having maximum prefix sum.
	msum = arr[0]
	for i in range(1, MAX, 1):
		arr[i] += arr[i - 1]
		if (msum < arr[i]):
			msum = arr[i]
			ind = i
	return ind

# Driver Code
if __name__ == '__main__':
	L = [1, 4, 9, 13, 21]
	R = [15, 8, 12, 20, 30]
	n = len(L)

	print(maximumOccurredElement(L, R, n))
	
# This code is contributed by
# Sanjit_Prasad
