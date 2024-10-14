t = int(input())
 
for _ in range(t):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    print(max((sum(a)+x-1)//x, *a))