//2016-12-31-00.05
//D

#include <cstdio>
#include <set>
#include <vector>
using namespace std;
int mr[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int mc[] = {0, 1, 1, 1, 0, -1, -1, -1};
struct point
{
    int x, y;
    bool operator < (const point& b)const
    {

        if (x == b.x) return y < b.y;
        else return x < b.x;
    }
};
set<point> vis;
vector<pair<point, int> > s, s1;
int con;
void add(int fo, int l, point p)
{
    for (int i = 0; i < l; i++)
    {
        p.x += mr[fo];
        p.y += mc[fo];
        //printf("%d %d %d\n", p.x, p.y, ++con);
        vis.insert(p);
    }
    s1.push_back({p, fo});
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int t;
        con = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &t);
            if (i == 0)
            {
                add(0, t, {0, 0});
                s = s1;
                s1.clear();
            }
            else
            {
                vector<pair<point, int> >::iterator it;
                for (it = s.begin(); it != s.end(); it++)
                {
                    //puts("111");
                    add((it->second + 1) % 8, t, it->first);
                    add((8 + (it->second - 1)) % 8, t, it->first);
                }
                s = s1;
                s1.clear();
            }
        }
        printf("%d\n", vis.size());
    }
}
