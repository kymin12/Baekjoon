a, b = map(int, input().split())
start = min(a, b)
end = max(a, b)
total = (start + end) * (end - start + 1) // 2
print(total)
