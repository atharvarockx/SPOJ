for z in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    l1=[]
    f=0
    if l.count(n-1)!=2:
        f=1
    else:
        a=1
        if n%2==0:
            a=n//2
        for i in range(1,a):
            if l.count(i)+l.count(n-i-1)!=2:
                f=1
                break
        if n%2!=0:
            if l.count(n//2 + 1)!=1:
                f=1
            
                
    if f==1:
        print("NO")
    else:
        print("YES")
        
