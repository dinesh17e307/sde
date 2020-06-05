from collections import Counter
t,n=map(int,input().split())
st=[list(input()) for i in range(t)]
value=list(zip(*st))
r=[]
for i in value:
    ob=Counter(sorted(list(i)))
    high=ob.most_common(1)
    r.append(high[0][0])
print("".join(r))
