def solve():
    s = input()
    a, b = map(int, input().split())

    # Variables to check presence of '0' and '1'
    has_zero = False
    has_one = False

    # Check if the string contains only '0' and '1' and track presence of '0' and '1'
    for c in s:
        if c == '0':
            has_zero = True
        elif c == '1':
            has_one = True
        else:
            print("INVALID")
            return
    
    # After scanning the string, check for both '0' and '1'
    if not has_zero or not has_one:
        print(0)
    else:
        print(min(a, b))

def main():
    tt = int(input())
    while tt > 0:
        solve()
        tt -= 1

if __name__ == "__main__":
    main()
