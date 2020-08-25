T=int(input())
while T:
    T-=1
    x,y = input().split()
    n = int(x)
    k = int(y)
    if k > n:
        print(0)
    else:
        tuSo=1
        mauSo=1
        for i in range (1,n+1):
            if i <= k:
                mauSo*=i
            tuSo*=i
        print(int(tuSo/mauSo)%1000000007)