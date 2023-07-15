#include <iostream>
using namespace std;

template <class T>
class CPoint {
private:
    T x, y;
public:
    CPoint(T a = 0, T b = 0) : x(a), y(b) {}
template <class T2>
friend ostream &operator<<(ostream&, CPoint<T2>)
};

template <class T>
ostream& operator<<(ostream& out, CPoint<T> Po)
{
    out << "(" << Po.x << ", " << Po.y << ")";
    return out;
} 

int main(void)
{
    CPoint<int> P1(1, 2);
    cout << P1;
    return 0;
}