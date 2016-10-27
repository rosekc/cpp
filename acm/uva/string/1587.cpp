//2016-10-27-22.33
//UVa1587

#include <cstdio>
#include <algorithm>
using namespace std;
int d[3];
int findd(int in)
{
    for (int i = 0; i < 3; i++)
    {
        if (d[i] == in) return i;
        if (i == 2 && d[2] == -1) {d[2] = in; return 2;}
    }
    return -1;
}
int main()
{
    int ab, bc, ac, t1, t2, t1s, t2s;
    while (scanf("%d%d", &d[0], &d[1]) != EOF)
    {
        d[2] = -1;
        ab = 1;
        bc = ac = 0;
        bool f = 1;
        for (int i = 0; i < 5; i++)
        {
            scanf("%d%d", &t1, &t2);
            t1s = findd(t1);
            t2s = findd(t2);
            if (t1s == -1 || t2s == -1) {f = 0; continue;}
            if (t1s > t2s) swap(t1s, t2s);
            int s = t1s * 10 + t2s;
            if (s == 1) ab++;
            else if (s == 2) ac++;
            else if (s == 12) bc++;
            else f = 0;
        }
        if (f && ab == 2 && bc == 2 && ac == 2) puts("POSSIBLE");
        else puts("IMPOSSIBLE");
    }
}
