
for z in range(int(input())):
    ng,nm=map(int,input().split(" "))
    l1=list(map(int,input().split(" ")))
    l2=list(map(int,input().split(" ")))
    l1.sort()
    l2.sort()
    f=0
    if l1==l2:
        print("Godzilla")
    else:
        if ng<=nm:
            for i in range(ng):
                if l1[i]>l2[i]:
                    print("Godzilla")
                else:
                    print("MechaGodzilla")
                break
        else:
            for i in range(ng):
                if l1[i]>l2[i]:
                    print("Godzilla")
                else:
                    print("MechaGodzilla")
                break
             
