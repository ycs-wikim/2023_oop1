// 05_17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class ABC
{
public:
    int m_Public;       // 누구나 => 인스턴스화/클래스 상속을 받은 누구나!
                        // 일반 멤버 변수 : 인스턴스화/객체화해야만 사용 가능
    static int m_sint;  // 정적 멤버 변수 : 내부적으로는 전역 변수로 사용되기 때문
                        // 인스턴스화/객체화하지 않아도 사용이 가능!
                        // 보통 인스턴스끼리 공유할 수 있는 멤버 : 전역 변수 1개를 같이 사용
                        // 객체에 포함되지 않고 별도 관리 ==> 메모리 구조에 포함X
    // 정적 멤버 함수 : 인스턴스화/객체화하지 않아도 즉시 호출 가능
    static void print()
    {
        int a[237];     // 내부에 변수 선언은 문제 없음
        //m_Public = 9;   // 일반 멤버 변수는 정적 멤버 함수에서 사용 불가
        m_sint = 999;   // 이미 메모리가 적재된 상태이기 때문에 즉시 사용 가능
        printf("Called print\n");
    }
    int g_kkk;
    void print1()
    {
        int a[237];
        m_Public = 88;      // 일반 멤버 사용 문제 X
        m_sint = 363;       // 전역 변수 사용과 같으므로 문제가 없음

        this->g_kkk = 888;      // 정확하게 g_kkk를 this로 구분할 수 있음
        printf("Called print %p\n", this);
    }

    // 상수 함수 : 내부에서 멤버 변수의 변경이 발생하지 않음을 보장.
    void constFunc() const
    {
        int z = 0;
        //m_Private = 9;
        z++;
        z = z * 1000;
        printf("Z: %d\n", z);
    }
private:
    int m_Private;      // 나만 => 클래스 내부에서만 사용 가능
protected:
    int m_Protected;    // 관게(상속) ==> 관계가 있는 클래스에서 사용
};

int ABC::m_sint = 8;    // static 변수는 반드시 전역 공간에서 초기화해야 사용 가능!
int g_kkk = 8;

class YYY
{
protected:
    int k;
    int z;
    int u;
    int io;
    void good_function(){}
};

// 클래스의 상속 : 특정 클래스의 기능/정보를 가져와서 사용하기 위한 방법
// 상속 문법 : 예약어 클래스이름 : 상속받을클래스이름
class ycs : ABC, YYY
{
    void asdfsajfoiuh()
    {
        k = 9;
        good_function();
        z = 0;
        u = 236;
        io = 237;
        m_Public = 9;           // 관계 있던 없던 사용 가능
        m_Protected = 234;      // 관계가 있으므로 접근이 가능
        //m_Private = 2387;     // 어떠한 경우에도 불가능
    }
};


int main()
{
    ABC::print();
    printf("SIZE: %lld\n", sizeof(ABC));

    ABC::m_sint = 9;
    printf("SINT: %d\n", ABC::m_sint);
    ABC k1, k2;
    k1.m_sint = 777;
    printf("SINT: %d - %d\n", ABC::m_sint, k1.m_sint);
    k2.m_sint = 999;
    printf("SINT: %d - %d\n", ABC::m_sint, k1.m_sint);
    printf("ADDR: %p - %p - %p\n", &k1.m_sint, &k2.m_sint, &ABC::m_sint);
    k1.print1();
    k2.print1();
    printf("ADDR-2:%p - %p\n", &k1, &k2);


    ABC b;
    b.m_Public = 4;
    std::cout << "Hello World!\n";
}
