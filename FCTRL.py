for z in range(int(input())):
    n=int(input())
    s=0
    while n!=0:
        n=n//5
        s=s+n
    print(s)
