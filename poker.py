import sys

T=int(input())
for i in range(T):
    t=input().split()
    n=int(t[0])
    k=int(t[1])
    s=input().split()
    nim=map(int,s)
    nimsum=nim[0]
    for j in range(1,n):
        nimsum=nim[j]^nimsum
    
    if nimsum==0:
        print("Second")
    else:
        print("First")