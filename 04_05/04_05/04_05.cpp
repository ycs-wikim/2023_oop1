// 04_05.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

//#define EX_1
//#define EX_2
#define EX_3


#ifdef EX_2
int Add(int a, int b)
{
    return a + b;
}
#endif

#ifdef EX_1
// 매크로 함수 : 사용하면 안됩니다. #define A B
// 전처리기 ==> 컴파일러가 번역하지 전! 처리!
#define SWAP(a, b)  {a ^= b; b ^= a; a ^= b;}     // XOR을 이용한 변수 값 교환
#endif

int main()
{
#ifdef EX_1
    int a = 0;
    int b = 1;

    // if(조건식) __참인_경우_실행__; 까지가 if가 영향을 미치는 문장
    // 조건식 : 참/거짓을 결과값으로 갖는 식이나 변수, 상수를 의미
    if (0)      // 반드시 거짓!
    {
        SWAP(a, b);     // 전처리시 "a ^= b; b ^= a; a ^= b;" 문장으로 변경
    }
    // 조건식 작성 시 비교인 경우라면 반드시 상수를 앞에 위치하도록 작성
    //   Ex) if( a == 3 ) XXXXXX    ==> if( 3 == a ) O
    if (a = 3)      // 오타로 대입문장이 만들어지면 0이 아니면 다 참!
    {
        printf("HW~~~\n");
    }
    //if( 3 = a)    // 이런 오타 방지를 위해 반드시 상수부터 쓰세요~
    { 
        printf("HW~~~2\n");
    }

    cout << a << " " << b << endl;
#endif

#ifdef EX_2
    int a, b;

    // switch( ) __한문장만_소유__;
    switch (Add(1, 0))
    {
    case 0:         // if(Add(1, 2) == 0 )
    case 1:         // case 1: ==> 라벨 : 실행X, 동작X
    case 2:         // case 변수X, 수식X, 상수O:
    //case a:       // case 뒤에 변수 올 수 없음!
    case 3:         // if(Add(1, 2) == 3 )
        a = 3;
        b = 7;
        if (1)      // 항상 참!
            cout << Add(a, b) << endl;
        // case 3에서 처리할 문장이 종료 시
        break;      // 가장 가까운 제어/반복문장을 빠져 나간다.
    case 4:         // if(Add(1, 2) == 4 )
        a = 30;
        b = 70;
        if (1)
            cout << Add(a, b) << endl;
        break;
    default:        // 어떤 case와도 동일한 값이 없는 경우 실행
        break;
    }
#endif

#ifdef EX_3
    int Sum = 0;
    int i = 0; // 초기값
    //for (;;) printf("break;");    /// 무한 반복 예
    // for(;;) 모두 생략 가능
    // for (; i < 11; i++)
    // for (int i = 0; ; i++)
    // for (int i = 0; ; )
    // for (; ; i++)
    // for (int i = 0; i < 11;)
    //for (int i = 0; i < 11; i++)
    for (; i < 11;)     // 조건식
    {
        Sum += i;
        i++;            // 제어식
    }

    cout << "Sum  :" << Sum << endl;

    // do ~ while 사용 예
    int qc[5] = { 1, 1, 1, 1, 1 };

    /// 조건을 만족하는지 확인
    do
    {
        if (1 != qc[0])
            break;
        if (1 != qc[1])
            break;
        if (1 != qc[2])
            break;
        if (1 != qc[3])
            break;
        if (1 != qc[4])
            break;
        // 모든 조건을 만족한 상태
        printf("옛다 퀘스트\n");
        return 0;
    } while (false);

    printf("너는 아직 준비가 안됐다.\n");




#endif
}
