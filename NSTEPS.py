for z in range(int(input())):
    x,y=map(int,input().split())
    if x==0 and y==0:
        print(0)
    elif x%2==0 and y==x-2:
        print(x+y)
    elif x%2!=0 and y==x-2:
        print(x+y-1)
    elif x==y and x%2==0:
        print(x+y)
    elif x==y and x%2!=0:
        print(x+y-1)
    else:
        print("No Number")
        
