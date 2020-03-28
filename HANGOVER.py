a=float(input())
while a!=0.00:
    i=2
    s=1/i
    c=0
    
    while s<a:
        c=c+1
        i=i+1
        s=s+1/i
    s1=str(c+1) + " card(s)"    
    print(s1)
    a=float(input())
        
