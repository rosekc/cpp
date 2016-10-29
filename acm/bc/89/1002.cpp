//2016-10-29-19.14
//Bestcoder 89 1002

#include <cstdio>
using namespace std;

int main()
{
    int c;
    scanf("%d", &c);
    while (c--)
    {
        int x, k, t, con = 0;
        scanf("%d%d%d", &x, &k, &t);
        while (1)
        {
            if (x <= 1) break;
            if (x % k == 0)
            {
                int t1 = x / k, t2 = x - t;
                if (t1 < t2)
                {
                    x = t1;
                }
                else
                {
                    x = t2;
                }
            }
            else
            {
                int t1 = x - t;
                bool f = 1;
                if (t1 <= 1) {x = 1; goto a;}
                for (int i = x - 1; i >= t1; i--)
                {
                    if (i % k == 0) {f = 0; x = i;}
                }
                if (f) x = t1;
            }
            a:
            con++;
        }
        printf("%d\n", con);
    }
}
