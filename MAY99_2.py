import math
l=['m','a','n','k','u']

for z in range(int(input())):
    n=int(input())
    n1=n
    f=0
    i=0
    le=1
    while f==0:
        le= le*5
        if n1>le:
            n1=n1-le
        else:
            f=1
    a=int(math.log(le,5))             
    print(n1,le)
    l1=[]
    le=le//5
    for i in range(a):
        l1.append(n1//le)
        n1=n1%le
            
        le=le//5
    if l1[-1]!=0:
        l1[-1]=l1[-1]-1
    else:
        l1[-1]=4
        if l1[-2]!=0:
            l1[-2]=l1[-2]-1
        else:
            for j in range(a-2,-1,-1):    
                if l1[j]==0:
                    l1[j]=4
                else:
                    l1[j]=l1[j]-1
                    break   
    s=""
    print(l1)
    for i in l1:
        s=s+l[i]
    print(s)
