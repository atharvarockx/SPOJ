for z in range(int(input())):
    x,a=map(int,input().split())
    n=a-x
    #print(n)
    y=n*(a+1)
    #print(y)
    #for i in range(1,n+1):
      #  if i!=x:
       #     y=y-i
            #print(y)
    y=y-(n*(n-1)//2)   
    print(y)        
            
