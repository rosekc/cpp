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


bool inter(Line l1,Line l2)
{
	return
	    max(l1.s.x,l1.e.x) > min(l2.s.x,l2.e.x) &&
	    max(l2.s.x,l2.e.x) > min(l1.s.x,l1.e.x) &&
	    max(l1.s.y,l1.e.y) > min(l2.s.y,l2.e.y) &&
	    max(l2.s.y,l2.e.y) > min(l1.s.y,l1.e.y) &&
	    sgn((l2.s-l1.e)^(l1.s-l1.e))*sgn((l2.e-l1.e)^(l1.s-l1.e)) <= 0 &&
	    sgn((l1.s-l2.e)^(l2.s-l2.e))*sgn((l1.e-l2.e)^(l2.s-l2.e)) <= 0;
}

struct Data
{
    int i;
    Line l;
};

int main()
{
	int n;
	vector< Data > data;
	vector< Data >::iterator iter;

	while ( scanf( "%d", &n ) != EOF && n != 0 )
	{
		for ( int i = 1; i <= n; i++ )
		{
			Line tmp;
			scanf( "%lf%lf%lf%lf", &tmp.s.x, &tmp.s.y, &tmp.e.x, &tmp.e.y );
			for( iter = data.begin(); iter != data.end(); iter++ )
			{
				if( inter( iter->l, tmp ) )
				{
					iter = data.erase( iter );
					if( iter == data.end() ) break;
				}
			}
			data.push_back( { i, tmp } );
		}

		printf( "Top sticks:" );

		for( iter = data.begin(); iter < data.end(); iter++ )
		{
			printf( " %d", iter->i );
			if( iter != data.end() - 1 ) printf( "," );
		}
		printf( ".\n");
		data.clear();
	}
}


