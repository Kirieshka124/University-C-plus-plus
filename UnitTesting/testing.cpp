#include <corecrt_math.h>
#include <iostream>
using namespace std;
int main() {
	float x, y;
	 cin >> x >> y;
	float R = (cos(x * acos(-1.0)) / sin(x * acos(-1.0))) - 1 / cos(y);
	float S = tan(x) - log(abs((x * x * x) + (y * y * y)));
	if (x != 0) {
		 cout << R <<  endl;
		 cout << S <<  endl;
	}
	else {
		 cout << R << "; R = undefined" <<  endl;
		 cout << S << endl;
	}

	
	float C = max(R, S);
	if (isinf(C)) {
		cout << S << endl;
	}
	else {
		cout << C << endl;
	}
	return 0;
}
