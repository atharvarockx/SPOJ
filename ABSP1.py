for z in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    #d=l[-1]-l[0]
    #s=0
    #for i in range(n):
        #s=s+abs(d-l[i])
    #print(2*s)
    l1=[n-1]
    j=n-3
    k=0
    while j>=0:
        l1.append(l1[k]+j)
        j=j-2
        k=k+1
    #print(l1)
    if n%2==0:
        l1=l1+l1[-2::-1]
    else:
        l1=l1+l1[-3::-1]
    #print(l1)
    j=0
    s=0
    for i in range(n-1):
       s=s+l1[j]*(l[i+1]-l[i])
       j=j+1
    print(s)   
