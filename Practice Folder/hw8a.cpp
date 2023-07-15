#include <iostream>
using namespace std;

class CPoint {
public:
    CPoint(float a = 0.0, float b = 0.0) : x(a), y(b) {}
    CPoint operator+(const CPoint &Po) { return CPoint(x + Po.x, y + Po.y); }
    CPoint operator-() { return CPoint(-x, -y); }
private:
    float x, y;
friend ostream& operator<<(ostream &out, const CPoint &Po);
};

ostream &operator<<(ostream &out, const CPoint &Po)
{
    out << "(" << Po.x << ", " << Po.y << ")" << endl;
    return out;
}

int main(void)
{
    CPoint P1(2, 3), P2(5, 6);
    CPoint P3 = P1 + P2;
    CPoint P4 = -P1;
    cout << P1 << P2 << P3 << P4;
}