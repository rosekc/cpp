//2017-02-11-23.16
//Uva

#include <bits/stdc++.h>
using namespace std;

int readchar()
{
    char ch = getchar();
    while (ch == '\n' || ch == '\r') ch = getchar();
    return ch;
}

int readint(int c)
{
    w = 0;
    while (c--)
    {
        w = readchar() - '0' + w << 1;
    }
}

int code[8][1 << 8];
int readcodes()
{

}
int main()
{
    while (readcodes())
    {
        while (1)
        {
            int len = readint(3);
            if (len == 0) break;
            while (1)
            {
                int v = readint(len);
                if (v == (1 << len) - 1) break;
                putchar(code[len][v]);
            }
        }
        puts("");
    }
}
