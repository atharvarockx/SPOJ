for z in range(int(input())):
    n=int(input())
    s=input()
    l1=[]
    l3=[0]*2*n
    l2=[]
    c=0
    d=0
    for i in range(len(s)):
        if i%2!=0:
            l1.append(s[i])
        else:
            l2.append([s[i].upper(),0])
    for i in range(len(l1)):
        a=[l1[i],0]
        if  a in l2[:i+1]:
            l2[l2.index([l1[i],0])][1]=1
            c=c+1
        else:    
            d=d+1
    print(d)    
