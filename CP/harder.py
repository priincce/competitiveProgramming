def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    results = []
    
    for _ in range(t):
        n = int(data[index])
        index += 1
        a = list(map(int, data[index:index + n]))
        index += n
        
        freq = [0] * (n + 1)
        b = []
        
        for i in range(n):
            b.append(a[i])
            freq[a[i]] += 1
        
        results.append(" ".join(map(str, b)))
    
    sys.stdout.write("\n".join(results) + "\n")

    
solve()