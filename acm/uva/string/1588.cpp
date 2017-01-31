//2017-01-25-14.27
//Uva 1588

#include <bits/stdc++.h>
using namespace std;

char d1[105], d2[105];

int main()
{
    while (scanf("%s%s", d1, d2) != EOF)
    {
        int len1 = strlen(d1);
        int len2 = strlen(d2);
        int re = -1;
        for (int i = 0; i < len1; i++)
        {
            bool f1 = 1, f2 = 1;
            for (int j = 0; j < len2 && i + j < len1; j++)
            {
                if (d1[i + j] == '2' && d2[j] == '2')
                {
                    printf("%d %d\n", i + j, j);
                    f1 = 0;
                    break;
                }
            }
            for (int j = len2 - 1; i + len2 - 1 - j >= 0 && i + len2 - 1 - j < len1; j--)
            {
                if (d1[i + len2 - 1 - j] == '2' && d2[j] == '2')
                {
                    f2 = 0;
                    break;
                }
            }
            if (f1 || f2)
            {
                re = max(i + len2, len1);
                printf("%d %d\n", re, i);
                break;
            }
        }
        if (re == -1) re = len1 + len2;
        printf("%d\n", re);
    }
}
