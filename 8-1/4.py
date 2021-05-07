def dhg(n) :
    if n==1 :
        return 1
    else :
        return n+dhg(n-1)

n=int(input())
print(dhg(n))
