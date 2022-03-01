def check(a,b):
	if len(a)!=len(b):
		return False
	return (2*a).find(b)
print(check("abcde","cdeab"))
