//2016-10-27-22.33
//UVa1587

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char t1[30], t2[30];
int con[3];
int ind;
char d[3][60];
int main()
{
    while (scanf("%s%s", t1, t2) != EOF)
    {
        if (t1 > t2) swap(t1, t2);
        ind = con[0] = 1;
        con[1] = con[2] = 0;
        strcpy(d[0], strcat(t1, t2));
        for (int i = 0; i < 5; i++)
        {
            scanf("%s%s", t1, t2);
            if (t1 > t2) swap(t1, t2);
            char tmp[60];
            strcpy(tmp, strcat(t1, t2));
            for (int j = 0; j < ind; j++)
            {
                if (con[j] != 2 && strcmp(tmp, d[j]))
                {
                    con[j]++;
                    break;
                }
                if (j == ind - 1 && ind != 3)
                {
                    strcmp(d[ind++], tmp);
                }
            }
        }
        if (con[0] == 2 && con[1] == 2 && con[2] == 2) puts("POSSIBLE");
        else puts("IMPOSSIBLE");
    }
}
