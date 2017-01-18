//2016-12-25-17.34
//B

#include <cstdio>
#include <string>
#include <iostream>
#include <map>
#include <set>
using namespace std;
map<char, char> m;
set<char> s;
int main()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        bool f = 0;
        m.clear();
        s.clear();
        for (int i = 0; i < s1.length(); i++)
        {
            if (m.find(s1[i]) != m.end())
            {
                if (m[s1[i]] != s2[i])
                {
                    puts("-1");
                    f = 1;
                    break;
                }
            }
            else
            {
                if (m.find(s2[i]) != m.end())
                {
                    if (m[s2[i]] != s1[i])
                    {
                        puts("-1");
                        f = 1;
                        break;
                    }
                }
                else
                {
                    if (s.count(s2[i]) != 0)
                    {
                        puts("-1");
                        f = 1;
                        break;
                    }
                    if (s1[i] != s2[i])  {m[s1[i]] = s2[i]; s.insert(s2[i]);}
                }
            }
        }
        if (f) continue;
        map<char, char>::iterator it;
        printf("%d\n", m.size());
        for (it = m.begin(); it != m.end(); it++)
        {
            printf("%c %c\n", it->first, it->second);
        }
    }
}
