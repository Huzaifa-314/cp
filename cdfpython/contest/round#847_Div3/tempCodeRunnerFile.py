for _ in range(int(input())):
    n = input()
    s = list(map(int, input().split()))
    s.sort()
    big=s[len(s)-1]
    set = 1
    while len(s) != 0:
        i=s[0]
        s.remove(i)
        for j in range(i+1, big+2):
            if j in s:
                s.remove(j)
            else:
                if len(s)==0:
                    break
                set = set+1
    print(set)
