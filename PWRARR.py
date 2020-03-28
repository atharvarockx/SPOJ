for z in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    a=len(l)
    print((a*(a+1))//2)
