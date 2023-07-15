//컴퓨터공학과 2학년
//C011168 이종훈

#include <iostream>
using namespace std;

template <class T>
class CPoint {
private:
        T x, y;
public:
        CPoint(T a = 0, T b = 0) : x(a), y(b) {}
template <class T2>
friend ostream &operator<<(ostream&, CPoint<T2>);
};      //end of template CPoint

template <class T>
ostream& operator<<(ostream& os, CPoint<T> pt)
{
        os << "(" << pt.x << ", " << pt.y << ")" << endl;
        return os;
}

int main(void)
{
        CPoint<int> P1(1, 2);
        CPoint<double> P2(1.1, 2.2);

        cout << P1 << P2;
        return 0;
}