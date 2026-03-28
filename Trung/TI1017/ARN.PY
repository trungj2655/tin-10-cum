S, X = input(), input()
ans, i, x = 0, 0, len(X)
end = len(S) - x
while i <= end:
    if X == S[i:i+x]:
        ans += 1
        i += x
    else:
        i += 1
print(ans)