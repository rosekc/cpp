//2016-12-06-23.32
//C

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int d[150];
int v[150];
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int re = 0;
        bool f = 0;
        memset(v, 0, sizeof v);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &d[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            int con = 0;
            if (v[i] != 0) continue;
            int t = d[i];
            v[i] = i;
            while (1)
            {
                if (v[t] == i)
                {
                    con++;
                    if (con % 2 == 0) con /= 2;
                    re = max(re, con);
                    break;
                }
                if (v[t] != 0) {f = 1; break;}
                v[t] = i;
                t = d[t];
                con++;
            }
            if (f) break;
        }
        if (f) puts("-1");
        else printf("%d\n", re);
    }
}
