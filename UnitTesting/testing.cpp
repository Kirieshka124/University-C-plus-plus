#include <iostream>
#include <string>
#include <cmath>
#include <locale>
using namespace std;

float Calculating(float x, float y) {
    if (y == 0 && x == 0) {
        cout << "Log can not be equal 0" << endl;
        throw invalid_argument("Invalid argument");
    }
    if (x == 0 && y != 0) {
        cout << "Log can not be equal 0" << endl;
        throw invalid_argument("Invalid argument");
    }
        
    float R = (cos(x * acos(-1.0)) / sin(x * acos(-1.0))) - 1 / cos(y);
    float S = tan(x) - log(abs(pow(x,3) + (pow(y,3))));
    float C = max(R, S);
    return C;
}

int main()
{
    setlocale(LC_CTYPE, "rus");
    float x, y;
    cin >> x >> y;
    cout << Calculating(x, y);
    return 0;
}