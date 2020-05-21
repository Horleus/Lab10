#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double v,x,y;

	setlocale(LC_ALL, "Ukrainian");

    cout << "x";
    cin >> x;
    cout << endl;

    cout << "y";
    cin >> y;
    cout << endl;

    if ((x<0) && (y<=0))
    {
       v=x*y;
    }
    else if (((0<=x) && (x<10)) && ((0<y) && (y<=9))) // Умови краще розбивати на окремі
    {
        v=1/tan(x/y); // котангенс це: 1/tan(...)
    }
    else
    {
    	v=-100;
    }



    return 0;
}

