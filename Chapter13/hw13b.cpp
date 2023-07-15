//컴퓨터공학과 2학년
//C011168 이종훈

#include <iostream>
using namespace std;

class CMyException {                    //CDivideZero롸 CNegativeNumber의 base 클래스
public:
        void What() { cout << "인수가 이상해" << endl; };
};

class CDivideZero : public CMyException {
public:
        void What() { cout << "0으로 나눌 수는 없습니다." << endl; }
};

class CNegativeNumber : public CMyException {
public:
        void What() { cout << "피연산자는 음수가 될 수 없습니다." << endl; }
};

void Process(int x, int y) {
        if (y == 0) throw CDivideZero();
        if (x <= 0 || y <= 0) throw CNegativeNumber();
        cout << "합: " << x + y << " 차: " << x - y << " 곱: "
                << x * y << " 몫: " << x / y << endl;
}

int main(void)
{
        int x, y;

        cout << "2개의 정수 입력: ";
        while(cin >> x >> y) {
                try {
                        Process(x, y);
                }
                catch (CMyException &a) {
                        a.What();
                }
                catch (...) {
                        cout << "모든 throw문을 수용할 수 있는 예외처리 핸들러입니다."
                                << endl;
                }
                cout << endl << "2개의 정수 입력: ";
        }
        cout << endl;
        return 0;
}

//hw13a의 경우 피연산자가 음수인 경우와 0인 경우를 구별하여 각각에 맞는 예외처리 문구를
//출력해주게 된다. 다만 hw13b의 경우에는 두 경우를 구분하여 출력하는 대신 두 경우 모두
//"인수가 이상해"로 출력한다. 이러한 점을 고려하면 어떠한 예외가 발생했는지를 출력
//메시지로 확인할 수 있게 해주는 hw13a가 더 좋을 것이라 생각한다.