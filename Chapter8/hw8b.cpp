//컴퓨터공학과 2학년
//C011168 이종훈

#include <iostream>
using namespace std;

class Complex {
public:
        Complex(float r=0.0, float i=0.0) : re(r), im(i) {}
        Complex operator+(Complex& com0) { return Complex(re + com0.re, im + com0.im); }
        Complex operator-() { return Complex(-re, -im); }
private:
        float re, im;
friend ostream& operator<<(ostream& out, const Complex& com0) {
        if (com0.im >= 0)
                out << com0.re << " + " << com0.im << "i" << endl;
        else
                out << com0.re<< " - " << -com0.im << "i" << endl;
        return out;
        }
};

int main(void)
{
        Complex com1(1.0, 2.0), com2(3.0, 4.0);
        Complex com3 = com1 + com2;     Complex com4 = -com1;
        cout << com1 << com2 << com3 << com4;
}