//컴퓨터공학과 2학년
//C011168 이종훈

#include <iostream>
using namespace std;

class CMath {
public:
        CMath(int c, string *n, int *m) : count(c), name(n), math(m) {}
        int operator[](string n) {
                for (int i = 0; i < count; i++)
                        if (n == name[i]) return math[i];
                return 0;
        }
private:
        string *name;
        int *math;
        int count;
};

int main(void)
{
        string name[] = {"Kim", "Park", "Lee", "Chong", "Byun"};
        int math[] = {40, 50, 60, 70, 80};
        CMath cm(5, name, math);
        cout << cm["Lee"] << endl;
        cout << cm["Pyo"] << endl;      //해당 이름이 없으면 0을 반환
}