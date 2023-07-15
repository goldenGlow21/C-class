//컴퓨터공학과 2학년
//C011168 이종훈

#include <iostream>
using namespace std;

class CIntPoint {
private:
        int x, y;

public:
        CIntPoint(int a, int b) : x(a), y(b) {}
        void Move(int a, int b) { x += a; y += b; }
        void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

class CDoublePoint {
private:
        double x, y;

public:
        CDoublePoint(double a, double b) : x(a), y(b) {}
        void Move(double a, double b) { x += a; y += b; }
        void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
        CIntPoint P1(1, 2);
        CDoublePoint P2(1.1, 2.2);

        P1.Print();
        P2.Print();

        return 0;
}