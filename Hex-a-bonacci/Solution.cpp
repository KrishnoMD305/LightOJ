// 3417331	        Krishno MD	        Hex-a-bonacci         C++ 20	        2025-04-20 05:13:39	        Accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Krishno_MD_KUET_CSE
int a, b, c, d, e, f;
ll dyna[10020];
ll fn(ll n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dyna[n]!=-1) return dyna[n];
    dyna[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))% 10000007;
    return dyna[n];
}
int main() {
    ll n;
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %lld", &a, &b, &c, &d, &e, &f, &n);
        memset(dyna,-1,sizeof(dyna));
        printf("Case %d: %lld\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
