// 05_03.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

// 구조체 + 함수 + 포인터
typedef struct myChar
{
    int a;
    int b;
    int c;
    int d;
    int z;
    int j;
    int y;
} MC, *PMC;


int Attack(PMC p)
{
    int r = p->a * 10 + p->b * 2 + p->c * 1 + p->d * 20 + p->z * 3 + p->j * 100
        + p->y * 10;

    return r;
}


void main()
{
    MC a = { 1, 3, 65, 78, 112 };
    int atck = 0;

    atck = Attack(&a);
    printf("ATTACK: %d\n", atck);

}


#ifdef FUNCTION_EX
// 함수 : 기능 ==> 정보전달 ==> 연산 ==> 결과
// 함수의 선언 : 결과반환값(자료형) 함수이름(인수/정보전달){ 연산; 결과; }

/**
* 함수를 만드는 방법
* 1. 함수의 기능을 정의한다.
*   ==> 2개의 수 중에서 큰 값을 알아낸다.
* 2. 함수의 반환값을 정의한다.
*   ==> 큰 값을 반환 받는다.
* 3. 함수의 이름을 만든다.
*   ==> getBigNumber
* 4. 함수가 전달 받을 정보를 설정
*   ==> int, int
* 5. 함수의 기능을 구현
*   ==> 두수를 비교한다. 큰 값을 ~~~한다. 확인된 큰 값을 알아낸다.
* 6. 함수의 반환 값을 전달한다.
*   ==> return int;
*/
// 함수 호출 방식 : Call By Value, Address, Reference
// 
// 1. Call By Value(8, 9)
// getBigNumber( int x = 8, int y = 9 )
int getBigNumber(int x, int y)
{
    x = 19;
    y = 25;
    if (x > y)
    {
        return x, y;
    }

    return y, x;        // 반환 값은 몇개를 쓰던 반드시 한개만 반환된다.
}

// 2. Call By Address
// getBigNumberAddr( int* x = &a, int* y = &b )
int getBigNumberAddr(int* x, int* y, int* big, int*small)
{
    int i = 3;
    int* p = &i;
    *x = 119;
    *y = 112;

    // *x == a, *y == b
    if (*x > *y)
    {
        *big = *x;
        *small = *y;
        return *x, *y;
    }

    *small = *x;
    *big = *y;

    return *y, *x;        // 반환 값은 몇개를 쓰던 반드시 한개만 반환된다.
}


// 3. Call By Reference
// getBigNumber( int& x = a, int& y = b )
int getBigNumberRef(int& x, int& y)
{
    int i = 3;
    int& p = i;

    x = 999;
    y = 1000;
    // *x == a, *y == b
    if (x > y)
    {
        return x, y;
    }

    return y, x;        // 반환 값은 몇개를 쓰던 반드시 한개만 반환된다.
}


void main()
{
    int a = 8, b = 9;
    int res = 0, r = 0;

    res, r = getBigNumber(a, b);   // Value
    printf("BIG: %d  -  SMALL: %d : %d::%d\n", res, r, a, b);

    res, r = getBigNumberAddr(&a, &b, &res, &r);  // Addr
    printf("BIG: %d  -  SMALL: %d : %d::%d\n", res, r, a, b);

    res, r = getBigNumberRef(a, b); // Ref
    printf("BIG: %d  -  SMALL: %d : %d::%d\n", res, r, a, b);
}
#endif


#ifdef STR_EX
typedef struct STag
{
    int m;              // 4
    char k;             // 1    // 패딩이 발생함. VS 설정에 따라 다름
    char str1[4];       // 4
    const char* str2;   // 8
} SType;

void main()
{
    printf("SIZE: %lld\n", sizeof(SType));

    SType s1;
    s1.m = 2017;
    memcpy(s1.str1, "C++", 4);
    s1.str2 = "World";

    SType s2;
    s2 = s1;

    cout << s2.m << " " << s2.str1 << " " << s2.str2 << endl;
}
#endif

#ifdef STRUCT_EX
// 구조체 : 서로 다른 자료형을 한꺼번에 선언하고 사용
// 구조체의 선언 : 예약어 구조체의이름 { 멤버 변수;;;;;; };
struct asdf
{
    int x;          // 4
    int y;          // 4
    int z;          // 4
    char k;         // 1
    char str[30];     // 30
    float t;        // 4
};


// 실무에서 구조체 사용하는 방법 : typedef A B -> A는 앞으로 B로 사용
typedef
// A 시작
struct my_character_information
{
    int level;      // 나의 레벨(최대 100)
    int str;        // 나의 힘
    int dex;        // 나의 민첩성
    int it;         // 나의 지성
    int hp;         // 나의 피
    int mp;         // 나의 마나
    int money;      // 내돈~~~
}
// A의 끝. B의 시작
MyChar, *PMyChar
;



int main()
{
    MyChar me, you;
    me.dex = 889;
    you = me;           // 일반 구조체 변수끼리는 대입 연산이 가능!

    PMyChar ptr = &me;


    struct asdf t1;
    struct asdf* asdfp = &t1;


    // 구조체 변수의 선언 및 초기화
    struct asdf b = { 667, 778, 889, 'o', "seghgjhyu6y5dt", 6.5f };
    struct asdf c = { 0, };
    // 구조체의 변수 선언 : 예약어 구조체이름 구조체변수이름;
    struct asdf a;      // 포함된 모든 변수를 한번에 선언
    // 구조체 변수의 사용 : 구조체변수이름.멤버이름
    //  멤버이름 : 메모리의 위치 주소
    a.x = 30;
    a.y = 89;
    a.z = 67;
    a.k = 65;
    a.str;
    a.t = 3.2f;
    printf("ASDF: %p %p %p\n%p %p %p\n", &a.x, &a.y, &a.z, &a.k, a.str, &a.t);

    // 포인터를 이용해 구조체 멤버에 접근
    int* p = (int*) & a;
    printf("ASDF: %d %d %d\n", a.x, a.y, a.z);
    printf("asdf: %d %d %d\n", *(p + 0), *(p + 1), *(p + 2));
    

    std::cout << "Hello World!\n";
}
#endif