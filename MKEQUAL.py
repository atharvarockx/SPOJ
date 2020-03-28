for z in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    s=sum(l)
    if s%n==0:
        print(n)
    else:
        print(n-1)
