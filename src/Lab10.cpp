#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double v,x,y,ctg;

	setlocale(LC_ALL, "Ukrainian");

    cout << "x";
    cin >> x;
    cout << endl;

    cout << "y";
    cin >> y;
    cout << endl;

    if((x<0) && (y<=0))
    {
    v=x*y;
    }

    if ((0<=x<10) && (0<y<=9));
    {
    v=ctg*x/y;
    }

    return 0;
}

