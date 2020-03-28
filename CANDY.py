n=int(input())
while n!=-1:
    l=[]
    for i in range(n):
        l.append(int(input()))
    if sum(l)%n!=0:
        print(-1)
    else:
        c=0
        avg=sum(l)//n
        for i in range(n):
            c=c+abs(l[i]-avg)
        print(c//2)
    n=int(input())    
