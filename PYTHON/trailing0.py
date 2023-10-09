def fact(N):
    fact=1
    i=N
    while i>0:
        fact=fact*i
        i=i-1

    return fact


def count_zero():
    var=fact(N)
    stru=str(var)
    count=0
    for q in range(len(stru)):
        if stru[q]=='0':
            count=count+1

    return count  


N=int(input("enter the number"))
resutl=count_zero()
print(resutl)
