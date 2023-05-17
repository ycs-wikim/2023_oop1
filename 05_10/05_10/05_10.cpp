// 05_10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 클래스 : 데이터와 기능을 합쳐서 정보 처리를 수행하는 정보 집합체
// 클래스 선언 : 예약어 클래스이름 { 멤버 ; } ;
class FirstClass
{
public:
    int x;
private:
    int y;
public:
    char k;
    char str[40];

    void asdf(int x)
    {
        printf("X: %d\n", x);
    }
};

#ifdef FUNCTION
// 함수의 원형(prototype) ==> 시그니처 : 반환값 함수이름(인수) ;
// 나중에 구현되어 있는 함수 이름을 미리 알려주어 번역에 문제가 없도록 도와준다.
void print(int x);
void print(char k);
int print(int k, char i);
void print(int x, int y);
int max(int x, int y);
char max(char x, char y);
float max(float x, float y);
unsigned short max(unsigned short x, unsigned short y);
//int min(int, int);      // 경고 == 오류

int main()
{
    int a = 9, b = 89;
    int result_int = 0;
    char result_char = 0;
    unsigned short result_ush = 0;

    result_int = max(a, b);
    printf("RES - Integer: %d\n", result_int);

    print('A');
    print(67);
    print(77, 89);
    //attack(6, 3, 9);
    //attack(6, 8);
    //attack(6);
    std::cout << "Hello World!\n";
}

// C언어의 함수 : 기능 ==> 설계 ==> 구현 ==> 실행 ==> 반환 값
// C++언어의 함수 : 디폴트 인수, 함수 이름의 중복 허용

// 1. 디폴트 인수 : 호출자가 별도로 값을 주지 않아도 값이 입력되는 기능
//  사용 주의점 : 디폴트 인수는 실인수보다 앞서 선언될 수 없다.
void attack(int myAttack, int buf1 = 0, int buf2 = 0)     // int myAttack = 6
{
    printf("ATTACK: %d\n", myAttack + buf1 * 3 + buf2 * 5);
}

// 2. 함수 이름의 중복
// 1) 인수의 개수가 달라야 중복이 허용된다.
// 2) 인수 개수가 같더라도 인수의 자료형이 다르면 허용된다.
//  * 호출할 때, 정확한 자료형으로 호출해야만 원하는 함수 호출이 가능
void print(int x)
{
    printf("int: %d\n", x);
}

void print(char k)
{
    printf("char: %c\n", k);
}

int print(int k, char i)
{
    printf("int-char: %d - %c\n", k, i);
    return k * 10;
}

void print(int x, int y)
{
    printf("DOUBLE: %d %d\n", x, y);
}

// 큰 값을 구해서 반환하는 함수
int max(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

char max(char x, char y)
{
    if (x > y)
        return x;
    return y;
}

float max(float x, float y)
{
    if (x > y)
        return x;
    return y;
}

unsigned short max(unsigned short x, unsigned short y)
{
    if (x > y)
        return x;
    return y;
}




#endif