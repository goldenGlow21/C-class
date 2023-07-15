#include <iostream>
using namespace std;

class CMath {
private:
    string *name;
    int *math;
    int count;
public:
    CMath(int c, string *n, int *m) : count(c), name(n), math(m) {}
    int mathscore(string n) {
        for(int i = 0; i < count; i++)
            if(n == name[i]) return math[i];
        return 0;
    }
};

int main(void)
{
    string name[] = {"Kim", "Park", "Lee", "Chong", "Byun"};
    int math[] = {40, 50, 60, 70, 80};
    CMath cm{5, name, math};
    cout << cm.mathscore("Lee") << endl;
    cout << cm.mathscore("Pyo") << endl;
}