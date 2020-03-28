for z in range(int(input())):
    a=input()
    n=int(input())
    s=0
    for i in range(n):
        s=s+int(input())
    if s%n==0:
        print("YES")
    else:
        print("NO")
