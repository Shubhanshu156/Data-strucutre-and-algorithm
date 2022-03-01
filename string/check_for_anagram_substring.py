

def anagram_check(txt,pattern):

	'''
	SO bascially we are using sliding window technique
	check for slide if not ans is present then add element to slide
	and remove first element from slide
	'''
	A=[0]*27
	B=[0]*27
	for i in range(len(pattern)):
		A[ord(txt[i])-96]+=1
		B[ord(pattern[i])-96]+=1
	for i in range(len(pattern),len(txt)):
		if A==B:
			return True
		else:
			A[ord(txt[i])-96]+=1    # add element to slide
			A[ord(txt[len(pattern)-i])-96]-=1   #remove element from slide
	return False

print(anagram_check("geeksforgeeks","frog"))
