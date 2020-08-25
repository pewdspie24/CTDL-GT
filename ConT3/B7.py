import heapq
T=input()
while T:
    T-=1
    n=int(input())
    li=[]
    heapq.heapify(li)
    for i in range(0,n):
        a=int(input().split())
        heapq.heappush(li,a)
    lb=[]
    heapq.heapify(lb)
    for i in range(0,n):
        a=int(input().split())
        heapq.heappush(lb,a)
    
