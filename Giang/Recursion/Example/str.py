s = "tesb"

def reverse_str(s):
    if s == "": return ""
    else:
        print(s[:-1])
        val = reverse_str(s[:-1])
        print(val)
        return s[-1] + val

print(reverse_str(s) + "\n")
print(s[::-1])