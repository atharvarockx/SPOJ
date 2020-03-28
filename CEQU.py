import math
for z in range(int(input())):
    a,b,c=map(int,input().split())
    d=math.gcd(a,b)
    if c%d==0:
        print("Case "+str(z+1)+": Yes")
    else:
        print("Case "+str(z+1)+": No")
