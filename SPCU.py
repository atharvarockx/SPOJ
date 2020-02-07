for z in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    f=0
    for i in range(n):
        if l[i]<=i:
            continue
        else:
            f=1
            print("NO")
            break
    if f==0:
        print("YES")
    
