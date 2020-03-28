m,n=map(int,input().split())
while m!=0 and n!=0:
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    l3=[0]*21
    l4=[0]*21
    for i in range(m):
        l3[l1[i]]=l3[l1[i]]+1
    for i in range(n):
        l4[l2[i]]=l4[l2[i]]+1
    #print(l3)
    #print(l4)
    #print(a,b)
    #print(l1,l2)
    d=0
    for i in range(21):
        a=min(l3[i],l4[i])
        l3[i]=l3[i]-a
        l4[i]=l4[i]-a
        d=d+(l3[i]+l4[i]+a)*i
    print(d)    
    m,n=map(int,input().split())
