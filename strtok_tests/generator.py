import random
import os

MAX_LEN = 10
N_TEST = 1000

symbols = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

for i in range(N_TEST):    
    s = ""
    delim = ""

    for j in range(MAX_LEN):
        s += symbols[random.randint(0, len(symbols) - 1)]

    for j in range(0, MAX_LEN // 2):
        delim += s[random.randint(0, len(s) - 1)]
        
    with open("test.txt", "w") as sample:
        sample.write(s + "\n" + delim)
        
    os.system("./strtok21 < test.txt > out21.txt")
    os.system("./strtok < test.txt > out.txt")
    print("TEST#", i)
    print(s)
    print(delim)
    print("OUT")
    os.system("cat out.txt out21.txt")
    status = os.system("diff -q out.txt out21.txt")
    if status == 0:
        print("SUCCESS")
    else:
        print("FAIL")
    