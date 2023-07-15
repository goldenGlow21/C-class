#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintVector(vector<int> intV, char *name)
{
        vector<int>::iterator iter;

        cout << ">> " << name << " : ";
        for(iter = intV.begin(); iter != intV.end(); iter++)
                cout << *iter << " ";
        cout << endl;
}

bool IntCompare(int a, int b)
{
        return (a > b) ? true : false;
}

int main(void)
{
        int i;
        vector<int> intV(5);

        cout << "5���� ���� �Է�: ";
        for (i = 0; i < 5; i++)
                cin >> intV[i];
        PrintVector(intV, "���� ��");

        sort(intV.begin(), intV.end(), IntCompare);     //��� ���ҵ鿡 ���� ���� ����
        PrintVector(intV, "���� ��");

        return 0;
}