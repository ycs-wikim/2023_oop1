// 03_22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>     // C++ 프로젝트
#include <stdio.h>      // C++은 C의 확장. 따라서 C의 기능 모두 사용 가능.

// 특정 이름을 공간을 현재 소스에서 모두 적용하고 싶을 때
using namespace std;

// 매크로 상수 : #define A B ==> A는 앞으로 B로 번역/사용된다.
#define PI 3.141592
//      A  B
// 매크로 함수 : #define A(인수) 인수를 이용한 수식
#define ADD(x,y) x + y
#define AD(x,y) printf("%d", x + y);


int main(int argc__, char **argv__)     // int는 인수의 개수, char** 인수의 내용
{
#ifdef PI1           // ifdef ==> if define 
    // 참인 구간
    printf("PI가 살아있어요!!!!\n");
#else
    // 거짓인 구간
    printf("PI가 죽었어요!!!!\n");
#endif

#ifdef _M_X64       // 현재 시스템의 아키텍처가 64비트인지 확인하는 매크로
    printf("64비트 윈도우 입니다.\n");
#else
    printf("32비트 윈도우 입니다.\n");
#endif

    printf("size : %d\n", sizeof(int));
    printf("%s - %s - [ %d ]\n", __FILE__, __FUNCTION__, __LINE__);

    printf("FIRST: %f : %d - %s\n", PI, argc__, argv__[ 0 ]);
    int x = 3;
    //cin >> x;
    cout << "Welcome to " << x << " C++" << endl;
    printf("Welcome to %d C++ %d\n", x, ADD(3, 6));
    // 매크로 함수의 오류 예 : printf("Welcome to %d C++ %d\n", x, AD(3, 6));
    // 오류 코드의 전처리 후 : printf("Welcome to %d C++ %d\n", x, printf("%d", 3 + 6););
    cout << "Hello World!\n" << x << endl;      // c의 printf와 같다.
                                            // endl == end of line == enter
    // std - standard namespace
    // :: - 범위 지정 연산자
    // cout - Console output
    
}
