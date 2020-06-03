for _ in range(int(input())):
    l1=[]
    l2=[]
    n=int(input())
    for i in range(n):
        m,k=map(int,input().split(" "))
        l1.append(m)
        l2.append(k)
    l1.sort()
    l2.sort()
    a=l1[n-1]-l1[0]
    b=l2[n-1]-l2[0]
    print(max(a,b)**2)
        
