for z in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    f=0
    for i in range(n-1):
        if l[i+1]<l[i]:
            f=1
            break
        else:
            l[i+1]=l[i+1]-l[i]
            l[i]=0
    if f==1:
        print("NO")
    elif f==0 and l.count(0)==n:
        print("YES")
    else:
        print("NO")
