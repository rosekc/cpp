//2016-10-31-23.34
//

#include <cstdio>
#include <algorithm>
using namespace std;
int ind, maxr;
struct stone
{
    int dd[3];
    stone() {}
    stone(int a, int b, int c)
    {
        dd[0] = a;
        dd[1] = b;
        dd[2] = c;
    }
    int findm()
    {
        return min(dd[0], min(dd[1], dd[2]));
    }
};
stone d[100015];
bool check(int a1, int b1, int a2, int b2)
{
    return (a1 == a2 && b1 == b2);
}
int finds(stone s1, stone s2)
{
    int *d1 = s1.dd;
    int *d2 = s2.dd;
    int maxrr = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                for (int l = k + 1; l < 3; l++)
                {
                    if (check(d1[i], d1[j], d2[k], d2[l]))
                    {
                        stone s = stone(d1[i], d1[j], d1[3 - i - j] + d2[3 - k - l]);
                        if (s.findm() > maxrr) maxrr = s.findm();
                    }
                }
            }
        }
    }
    return maxrr;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        ind = n;
        maxr = 0;
        int ans1, ans2 = -1;
        for (int i = 1; i <= n; i++)
        {
            int a, b, c;
            scanf("%d%d%d", &a, &b, &c);
            d[i] = stone(a, b, c);
            if (maxr < d[i].findm())
            {
                maxr = d[i].findm();
                ans1 = i;
            }
        }
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int t = finds(d[i], d[j]);
                if (t > maxr)
                {
                    maxr = t;
                    ans1 = i;
                    ans2 = j;
                }
            }
        }
        if (ans2 == -1)
        {
            printf("1\n%d\n", ans1);
        }
        else printf("2\n%d %d\n", ans1, ans2);
    }
}
