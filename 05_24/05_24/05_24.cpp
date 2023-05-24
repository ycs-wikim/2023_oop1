// 05_24.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class CParent
{
public:
    CParent()
    {
        printf("%s - %p called\n", __FUNCTION__, this);
    }

    ~CParent()
    {
        printf("%s - %p called\n", __FUNCTION__, this);
    }
};

class CChild : CParent
{
    int m_yyy;
    const int m_kkk;    // 선처리 영역에서 초기화하는 상수 멤버는 즉시 초기화하지 않아도 됨.
                        // 모든 생성자에 선처리 영역을 만들어야 정상적으로 동작.
public:
    CChild()
        : m_kkk(3),      // 선처리 영역에서 상수 멤버를 상수 초기화
        m_yyy(777)      // 선처리 영역에서 일반 멤버 변수 초기화도 가능
    {
        printf("%d ] %s - %p called\n", m_kkk, __FUNCTION__, this);
    }
    CChild(int k)
        : m_kkk(k),      // 선처리 영역에서 상수 멤버를 생성자 인수로 초기화도 가능
        m_yyy(k + 999)  // 선처리 영역에서 일반 멤버 변수를 인수 및 연산을 통해서도 초기화 가능
    {

    }

    ~CChild()
    {
        printf("%s - %p called\n", __FUNCTION__, this);
    }
};


void main()
{
    CChild c;
    printf("C: %p\n", &c);
}



#ifdef CD
class CClass
{
public:
    /// 생성자와 소멸자 : 객체가 생성되는 시점/해제되는 시점에 자동으로 호출되는 함수다.
    ///             권한을 반드시 public으로 선언해야 한다.
    /// 생성자 함수 특징 : 함수의 반환값이 존재하지 않는다. 함수 이름은 클래스 이름과 동일하다.
    ///     멤버 변수들을 초기화하기 위한 용도로 사용
    ///     인수를 허용하기 때문에 생성자 함수의 중복이 허용된다.
    CClass()
    {
        m_x = 0;
        m_y = 1;
        printf("1-%p) X: %d - Y: %d\n", this, m_x, m_y);
    }

    CClass(int x)
    {
        m_x = x;
        m_y = 0;
        printf("2-%p) X: %d - Y: %d\n", this, m_x, m_y);
    }

    CClass(int x, int y)
    {
        m_x = x;
        m_y = y;
        printf("3-%p) X: %d - Y: %d\n", this, m_x, m_y);
    }

    // 소멸자 : 반환값이 존재하지 않는다. 함수 이름이 클래스 이름과 동일하다.
    //      단, 함수 이름 앞에 ~(틸드)를 붙여서 함수를 작성한다.
    //      인수가 허용되지 않기 때문에 반드시 1개의 소멸자만 존재할 수 있다.
    ~CClass()
    {
        printf("%p - 소멸자가 호출됨.\n", this);
    }

public:
    int m_x;
    int m_y;
};


int main()
{
    CClass a;                       // 기본 생성자 호출
    CClass b(15);                   // 인수가 1개인 생성자 호출
    CClass c(34, 67);               // 인수가 2개인 생성자 호출
    CClass* d = new CClass(777);    // 동적 메모리 할당으로 인수가 1개인 생성자 호출

    std::cout << "Hello World!\n";
    delete d;                       // 동적 메모리 해제
}
#endif