for _ in range(int(input())):
    s=input()
    l1=list(s)
    s1=set(l1)
    if len(s1)==len(l1):
        print("No")
    else:
        print("Yes")
