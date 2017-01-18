//2016-12-06-22.47
//B

#include <cstdio>
using namespace std;
int d[1000000 + 10];
int main()
{
    int n, x;
    int con = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d[i]);
    }
    if (n == 1)
    {
        puts("0");
        continue;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((d[i] ^ d[j]) == x) con++;
            //printf(" %d %d\n", d[i] ^ d[j], con);
        }
    }
    printf("%d\n", con);
}
