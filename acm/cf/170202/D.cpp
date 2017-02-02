//2017-02-02-23.08
//

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int x1, y1, x2, y2;
};

node d[500000+ 100];
int Record[500000+ 100];
bool check(int i, int j)
{

    if ((d[i].x1 == d[j].x2 && (d[i].y1 <= d[j].y2 || d[i].y2 >= d[j].y2)) ||
        (d[i].x2 == d[j].x1 && (d[i].y1 <= d[j].y2 || d[i].y2 >= d[j].y2))) return 1;
    else return 0;
}

void FourColorLabel(int num)
{
    Record[0]=1;
    int m=1, n=1;
    while (m<=num)
    {
        while(n<=4&& m<=num)
        {
            int k=0;
            for (k=0; k<m; k++)
            {
                if (check(m, k)==1 && Record[k]==n) break;
            }
            if (k<m) n++;
            else
            {
                Record[m]=n;
                m++;
                n=1;
            }
        }
        if (n>4)
        {
            m--;
            n=Record[m]+1;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &d[i].x1, &d[i].y1, &d[i].x2, &d[i].y2);
    }
    FourColorLabel(n);
    puts("YES");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", Record[i]);
    }
}
