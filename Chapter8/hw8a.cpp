//컴퓨터공학과 2학년
//C011168 이종훈

#include <iostream>
using namespace std;

class CPoint {
public:
        CPoint(float a=0.0, float b=0.0) : x(a), y(b) {}
        CPoint operator+(CPoint& P0) { return CPoint(x + P0.x, y + P0.y); }
        CPoint operator-() { return CPoint(-x, -y); }
private:
        float x, y;
friend ostream& operator<<(ostream&, const CPoint&);
};
ostream& operator<<(ostream& out, const CPoint& P0) {
        out << "(" << P0.x << ", " << P0.y << ")" << endl;
        return out;
}

int main(void)
{
        CPoint P1(2, 3), P2(5, 6);
        CPoint P3 = P1 + P2; CPoint P4 = -P1;
        cout << P1 << P2 << P3 << P4;
}