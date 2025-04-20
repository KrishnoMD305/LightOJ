// 3417333	        Krishno MD	        Hex-a-bonacci         C	        2025-04-20 05:14:18	        Accepted

#include <stdio.h>
// Krishno_MD_KUET_CSE
int a, b, c, d, e, f;
long long dyna[10020];
long long fn(long long n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dyna[n]!=-1){return dyna[n];}
    dyna[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))% 10000007;
    return dyna[n];
}
int main() {
    long long n; int test;
    scanf("%d", &test);
    for (int caseno = 1; caseno <= test; ++caseno) {
        scanf("%d %d %d %d %d %d %lld", &a, &b, &c, &d, &e, &f, &n);
        memset(dyna,-1,sizeof(dyna));
        printf("Case %d: %lld\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
