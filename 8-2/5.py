def ncr(n,r) :
    if n==r or r==0 :
        return 1
    else :
        return ncr(n-1,r-1)+ncr(n-1,r)

n,r=input().split()
n=int(n)
r=int(r)
print(ncr(n,r))
