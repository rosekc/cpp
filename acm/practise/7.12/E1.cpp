#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

const double eps = 1e-3;

struct Point
{
	double x, y;
	Point() {}
	Point( double _x, double _y )
	{
		x = _x;
		y =  _y;
	}
	Point operator - ( const Point &b ) const
	{
		return Point(x - b.x, y - b.y );
	}
	double operator ^ ( const Point &b ) const
	{
		return x * b.y - y * b.x;
	}
	double operator * ( const Point &b ) const
	{
		return x * b.x + y * b.y;
	}
};

double dist(Point a, Point b)
{
	return sqrt((a - b) * (a - b));
}

int sgn( double x )
{
	if ( fabs( x ) < eps ) return 0;
	if ( x < 0 ) return -1;
	else return 1;
}

struct Line
{
	Point s,e;
	Line() {}
	Line(Point _s,Point _e)
	{
		s = _s;
		e = _e;
	}
//��ֱ���ཻ�󽻵�
//��һ��ֵΪ0��ʾֱ���غϣ�Ϊ1��ʾƽ�У�Ϊ0��ʾ�ཻ,Ϊ2���ཻ
//ֻ�е�һ��ֵΪ2ʱ�������������
	pair<int,Point> operator &(const Line &b)const
	{
		Point res = s;
		if(sgn((s-e)^(b.s-b.e)) == 0)
		{
			if(sgn((s-b.e)^(b.s-b.e)) == 0)
				return make_pair(0,res);//�غ�
			else return make_pair(1,res);//ƽ��
		}
		double t = ((s-b.s)^(b.s-b.e))/((s-e)^(b.s-b.e));
		res.x += (e.x-s.x)*t;
		res.y += (e.y-s.y)*t;
		return make_pair(2,res);
	}
};

Line data[ 100005 ];
bool re[ 100005 ];

bool inter(Line l1,Line l2)
{
	return
	    max(l1.s.x,l1.e.x) >= min(l2.s.x,l2.e.x) &&
	    max(l2.s.x,l2.e.x) >= min(l1.s.x,l1.e.x) &&
	    max(l1.s.y,l1.e.y) >= min(l2.s.y,l2.e.y) &&
	    max(l2.s.y,l2.e.y) >= min(l1.s.y,l1.e.y) &&
	    sgn((l2.s-l1.e)^(l1.s-l1.e))*sgn((l2.e-l1.e)^(l1.s-l1.e)) <= 0 &&
	    sgn((l1.s-l2.e)^(l2.s-l2.e))*sgn((l1.e-l2.e)^(l2.s-l2.e)) <= 0;
}

int main()
{
	int n;

	while ( scanf( "%d", &n ) != EOF && n != 0 )
	{
		for ( int i = 0; i < n; i++ )
		{
			scanf( "%lf%lf%lf%lf", &data[ i ].s.x, &data[ i ].s.y, &data[ i ].e.x, &data[ i ].e.y );
			re[ i ] = 0;
		}

		for ( int i = 0; i < n; i++ )
		{
			for( int j = n - 1; j > i; j-- )
			{
				if( inter( data[ i ], data[ j ] ) )
				{
					re[ i ] = 1;
					break;
				}
			}
		}

		printf( "Top sticks:" );

		for( int i = 0; i < n; i++ )
		{
			if( re[ i ] == 0 )
			{
				printf( " %d", i + 1 );
				if( i != n - 1 ) printf( "," );
			}

		}
		printf( ".\n");
	}
}


