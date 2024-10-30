#include <corecrt_math.h>
#include <iostream>
int main() {
	float x=-1534, y=-9123;
	const double PI = acos(-1.0);
	double R = (cos(x * PI) / sin(x * PI)) - 1 / cos(y);
	double S = tan(x) - log(abs((x * x * x) + (y * y * y)));
	std::cout << R << std::endl;
	std::cout << S << std::endl;
	double C = std::max(S, R);
	std::cout << S << std::endl;
	return 0;
}
