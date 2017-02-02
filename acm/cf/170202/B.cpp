//2017-02-02-21.49
//

#include <bits/stdc++.h>
using namespace std;

int d[200000 + 100];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &d[i]);
    int b = n - 1;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (n % 2 == 0 && i == n / 2) f = 1, b--;
        if ((i + f) % 2 == 0)
        {
            printf("%d ", d[b]);
            b -= 2;
        }
        else
        {
            printf("%d ", d[i]);
        }
    }
    puts("");
}
