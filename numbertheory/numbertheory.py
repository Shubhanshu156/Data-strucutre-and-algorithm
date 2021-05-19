def primality_test(number):
    # to check a number is prime or not
    # check if there is a multiple of a number iwthin its quare root
    import math
    
    if number==1:
        return False
    # run loop from 2 to sqrt of n beacuse there is always a pair wwhen we multipy them number come like (1,12),(2,6),(3,4)
    for x in range(2,int(math.sqrt(number))):
       
        
        if number%x==0:
            return False
    return True
def Sieve_of_eratosthenes(number):
    import math
    # firt create a list of true and false
    # mark 1,2 as true as we know that they are prime number

    lst=[True for x in range(0,number+1)]
    for x in range(2,int(math.sqrt(number))+1):
        if lst[x]:
            sq=int(math.sqrt(number))
            for y in range(2*x,number+1,x):
                lst[y]=False

    lst[0]=True
    lst[1]=True
    lst[2]=True
    mainlst=[]
    for index,ele in enumerate(lst):
        if lst[index] and index>=2:
            mainlst.append(index)
    return mainlst
def primefactorisation(number):
    import math
    for x in range(2,int(math.sqrt(number)+1)):
        if number%x==0:
            count=0
            while (number%x==0):
                number=number//x
                count+=1
            print(x,count)
def primef_sieve(number):
    find=number
    arr=[-1 for x in range(number+1)]
    lst=[]
    for i in range(2,number+1):
        if arr[i]==-1:
            for j in range(i,number+1,i):
                
                if arr[j]==-1:
                    arr[j]=i
    lst=[]
    while find!=1:
        m=arr[find]
        find=int(find/m)
        lst.append(m)
    return lst
def matrix_multiplaction(matrixA,matrixB):
    matrixC=[]
    
    for m in range(len(matrixA)):
        matrixC.append([0]*len(matrixB[0]))
    for i in range(len(matrixA)):
        for j in range(len(matrixC[0])):
            result=0
            for k in range(len(matrixB)):
                matrixC[i][j]+=matrixA[i][k]*matrixB[k][j]
    return matrixC
def matrix_exponentiation(matrix,power):
    import cp
    identity=[]
    for m in range(len(matrix)):
        identity.append([0]*len(matrix[0]))
    for row in range(len(matrix)):
        for column in range(len(matrix[0])):
            if row==column:
                identity[row][column]=1
    while power>0:
        if power%2!=0:
            identity=cp.matrix_multiplaction(identity, matrix)
        matrix=cp.matrix_multiplaction(matrix, matrix)
        power=power//2
    return identity

def binary_exponentiation(a,b):

     res = 1
     while (b > 0):
        if (b%2!=0):
            res = res * a
        a = a * a
        b=b//2
     return res
            
            
