// 03_29.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

using namespace std;

// 자료형 정의 : typedef A B;    ==> A 자료형을 B로 표기한다.
typedef int INT;        // int 자료형을 INT로 표기한다.
typedef char CHAR;      // char 자료형을 CHAR로 표기한다.

typedef
// A 시작
struct information_for_x_y_position_and_z_axis
{
    int x;
    int y;
    int z;
    char c;
    char buf[128];
}
// A 종료
POS_INFO;       // B

typedef int i;

struct information_for_x_y_position_and_z_axis info;


int main()
{
    i i = 8;
    i++;
    printf("IIIIII : %d\n", i);

    {   /// 스택을 생성함
        
        //printf("k : %d\n", k);
        int k = 19;
    }
    //k++;          // k 변수를 알 수 없음
    //printf("k : %d\n", k);


    INT a;
    CHAR c;
    POS_INFO k;

    // 문자열 : 문자 자료형으로 구성된 배열. 반드시 마지막은 NULL로 종료.
    char str[8];                // 선언만 하고, 초기화 하지 않은 경우 : 쓰레기 값
    char str1[8] = "asdf";      // 초기화된 문자열 + NULL 이 자동으로 포함
    char str2[8] = { 0 };       // 모든 메모리를 0(NULL)로 초기화
    char str3[8] = "";
    char str4[8] = { 0, };      // 배열 초기화 가장 좋은 방법
    char str5[8] = { 65, };
    char str6[ ] = "8sksforkwrh8sfosfd98";  // 인덱스 없이 초기화도 가능

    // 1. 문자열 사용
    //str3 = "assfd";           // 문자열 배열 이름이 상수이므로 할당/대입/치환 불가
    //3 = 7;
    str3[0] = 'C';
    str3[1] = '+';
    str3[2] = '+';
    str3[3] = '+';
    str3[4] = '+';
    str3[5] = '+';
    str3[2] = 0;
    printf("STR3: %s\n", str3);

    // 2. 메모리를 복사 : 주소, 값, 길이
    memcpy(str3, "asdf1", 5);
    printf("STR3: %s\n", str3);
    //strcpy(str3, "afskdjhakuhfiasd");     // 사용하지 말것!
    // 3. 메모리 설정 : 주소, 값, 길이
    memset(str3, 0x00, 8);
    printf("STR3-1: %s\n", str3);

    // 4. 주의 사항
    memcpy(str3, "asdf111", 7);         // asdf1110
    printf("STR3-2: %s\n", str3);
    memset(str3, 0x00, 8);              // 문자열 버퍼 초기화
    memcpy(str3, "1112", 4);            // 11121110
    printf("STR3-3: %s\n", str3);

    wchar_t wc = 'a';
    printf("CCC: %c\n", wc);
    wchar_t wc1[8] = L"asdf";
    //printf("CCC1: %s\n", wc1);
    wcout << "WCout " << wc1 << endl;
    wchar_t wc2[8] = L"와이드캐릭터";
    wcout << "WCout-2 " << wc2 << endl;

    printf("%s - %s - %s - %s - %s - %s\n", str, str1, str2, str3, str4, str5);
    cout << "Hello World!\n";
}
