#include <corecrt_math.h>
#include <iostream>
int main() {
	float x=-100, y=-262;
	const double PI = acos(-1.0);
	double R = (cos(x * PI) / sin(x * PI)) - 1 / cos(y);
	double S = tan(x) - log(abs((x * x * x) + (y * y * y)));
	std::cout << R << std::endl;
	std::cout << S << std::endl;
	float C = std::max(S, R);
	std::cout << C << std::endl;
	return 0;
}
/*
1.
x=1;y=1
R = -8.16562e+15
S = 0.864261
C = 0.864261
2.
x=-100; y=16
R = -5.09065e+14
S = -13.2242
C = -13.2242
3.x=39;y=-160
R = -1.20065e+14
S = -11.5964
C = -11.5964
4.
x=10000;y=4160
R = -2.05896e+12
S = -27.3796
C = -27.3796
5.
x=-100;y=-262
R = -5.09065e+14
S = -16.1719
C = -16.1719


*/
