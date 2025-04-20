# 3417335	        Krishno MD	        Hex-a-bonacci         Python	        2025-04-20 05:14:53	        Accepted
  
import sys
sys.setrecursionlimit(20000)
# Krishno_MD_KUET_CSE
def fn(n,a,b,c,d,e,f,dyna):
    if n == 0: return a
    if n == 1: return b
    if n == 2: return c
    if n == 3: return d
    if n == 4: return e
    if n == 5: return f
    if dyna[n] != -1: return dyna[n]
    dyna[n] = (fn(n - 1,a,b,c,d,e,f,dyna) + 
             fn(n - 2,a,b,c,d,e,f,dyna) + 
             fn(n - 3,a,b,c,d,e,f,dyna) + 
             fn(n - 4,a,b,c,d,e,f,dyna) + 
             fn(n - 5,a,b,c,d,e,f,dyna) + 
             fn(n - 6,a,b,c,d,e,f,dyna)) % 10000007
    return dyna[n]

def main():
    test = int(input())
    for i in range(1, test + 1):
        a, b, c, d, e, f, n = map(int, input().split())
        dyna = [-1] * 10020  
        print(f"Case {i}: {fn(n,a,b,c,d,e,f,dyna) % 10000007}")

main()

    for i in range(1, test + 1):
        a, b, c, d, e, f, n = map(int, input().split())
        dyna = [-1] * 10020  
        print(f"Case {i}: {fn(n,a,b,c,d,e,f,dyna) % 10000007}")

main()
