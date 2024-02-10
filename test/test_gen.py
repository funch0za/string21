import random

MAX_LEN = 10
N_TEST = 20

SYMBOLS = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ%$#@()-+*&"

def get_str(s_len):
    s = ""
    for j in range(s_len):
        s += SYMBOLS[random.randint(0, len(SYMBOLS) - 1)]
    return s

def get_delim(s):
    delim = ""
    for j in range(0, MAX_LEN // 2):
        delim += s[random.randint(0, len(s) - 1)]
    return delim

def get_chr():
    return SYMBOLS[random.randint(0, len(SYMBOLS) - 1)]

strs = ["" for i in range(N_TEST)]
delims = ["" for i in range(N_TEST)]
n = [0 for i in range(N_TEST)]
c = [' ' for i in range(N_TEST)]

for i in range(N_TEST):
    s_len = random.randint(1, MAX_LEN)
    strs[i] = get_str(s_len)
    delims[i] = get_delim(strs[i])
    n[i] = random.randint(1, s_len + 1)
    c[i] = get_chr()
    
    
print("STRS")
for i in range(N_TEST):
    print('"' + strs[i] + '"', end=", ")
    
print("\nDELIMS")
for i in range(N_TEST):
    print('"' + delims[i] + '"', end=", ")
    
print("\nCHRS")
for i in range(N_TEST):
    print(c[i], end="")

print("\nNUMS")
for i in range(N_TEST):
    print(n[i], end=", ")
    