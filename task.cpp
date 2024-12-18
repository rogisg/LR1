//вариант 14
//Треугольник задается координатами своих вершин на плоскости: A(x1,y1);B(x2,y2);C(x3,y3). Найти сумму длин медиан треугольника АВС.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    float midABx = (x1 + x2) / 2;
    float midABy = (y1 + y2) / 2;

    float midACx = (x1 + x3) / 2;
    float midACy = (y1 + y3) / 2;

    float midBCx = (x2 + x3) / 2;
    float midBCy = (y2 + y3) / 2;

    float medianA = sqrt(pow(midBCx - x1, 2) + pow(midBCy - y1, 2));
    float medianB = sqrt(pow(midACx - x2, 2) + pow(midACy - y2, 2));
    float medianC = sqrt(pow(midABx - x3, 2) + pow(midABy - y3, 2));

    float rez = medianA + medianB + medianC;

    cout << rez << endl;

    return 0;

}
