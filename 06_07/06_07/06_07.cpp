// 06_07.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

#include <stack>
#include <queue>
#include <vector>

class CClass
{
public:
    int x;
    int y;
    int z;
    ~CClass()
    {
        printf("소멸자 : %p\n", this);
    }
};

vector<CClass*> g_vec;

int main()
{
    CClass *c1, *c2, *c3;
    c1 = new CClass();
    c2 = new CClass();
    c3 = new CClass();

    c1->x = 90;      c2->x = 328;     c3->x = 3298;
    c1->y = 80;      c2->y = 387;     c3->y = 2389;
    c1->z = 23978;   c2->z = 29;      c3->z = 12187;
    //g_vec.push_back(234);
    //g_vec.push_back(762);

    g_vec.push_back(c1);
    g_vec.push_back(c2);
    g_vec.push_back(c3);

    //g_vec.clear();
    for (int k = 0; k < g_vec.size(); k++)
    {
        printf("VEC[ %d ] : %d - %d - %d\n", k, g_vec[k]->x, g_vec[k]->y, g_vec[k]->z);
    }

    for (int k = 0; k < g_vec.size(); k++)
    {
        CClass* ptr = g_vec[k];
        delete ptr;
    }
    g_vec.clear();
    std::cout << "Hello World!\n";
}
