import math
for z in range(int(input())):
    s1,s2=map(int,input().split())
    s2=abs(s1-s2)
    s1=abs(s1)
    d=s1*s2
    a=math.gcd(s1,s2)
    a=a*a
    print(d//a)
    
