// 03_22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>     // C++ 프로젝트
#include <stdio.h>      // C++은 C의 확장. 따라서 C의 기능 모두 사용 가능.

// 특정 이름을 공간을 현재 소스에서 모두 적용하고 싶을 때
using namespace std;

int main(int argc__, char **argv__)     // int는 인수의 개수, char** 인수의 내용
{
    printf("FIRST: %d - %s\n", argc__, argv__[ 0 ]);
    int x = 3;
    //cin >> x;
    cout << "Welcome to " << x << " C++" << endl;
    printf("Welcome to %d C++\n", x);
    cout << "Hello World!\n" << x << endl;      // c의 printf와 같다.
                                            // endl == end of line == enter
    // std - standard namespace
    // :: - 범위 지정 연산자
    // cout - Console output
    
}
