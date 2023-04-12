// 04_12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 전역 변수의 선언
int g_k;

int main()
{
    // 포인터 정리
    // 사용 이유 : 접근할 수 없는 위치의 값을 접근하기 위해 사용
    // 포인터 변수 선언 : 자료형 *포인터변수이름 = 주소 값;
    // 포인터 연산자
    //  1. *변수 : 바로 뒤의 변수의 값을 접근한다.
    //  2. &변수 : 바로 뒤의 변수의 주소 값을 반환한다.

    // * 전역 변수의 선언과 사용
    printf("1 : %d - 0x%p\n", g_k, &g_k);

    // * 일반 변수의 선언과 사용
    int a = 3;      // 선언 및 초기화
    //printf("%d - %d - %p\n", a, *a, &a);
    printf("2 : %d - 0x%p\n", a, &a);

    // * 포인터 변수의 선언과 사용
    //int* p = a;       // 일반 변수 값으로 초기화 불가능
    int* p = &a;
    printf("3 : %p - %d - %p\n", p, *p, &p);

    // * 배열 변수의 선언과 사용
    int arr[3] = { 243, 6445, 43897 };
    printf("4 : %d - %d - %p\n", arr, *arr, &arr);
    printf("5 : %d - %d - %d\n", arr[0], arr[1], arr[2]);
    printf("6 : %d - %d - %d\n", *(arr + 0), *(arr + 1), *(arr + 2));

    // 배열과 포인터의 관계
    int* ptr = arr;
    printf("7 : %d - %d - %d\n", *(ptr + 0), *(ptr + 1), *(ptr + 2));
    printf("8 : %d - %d - %d\n", ptr[0], ptr[1], ptr[2]);

    int* ppp;
    ppp = (int*)malloc(sizeof(int));
    *ppp = 34897;
    printf("%d\n", *ppp);
    /*
    // 배열 : 동일한 자료형 N개를 한번에 선언하고 사용
    // 배열 선언 : 자료형 배열변수이름[ 사용할 변수 개수 ];
    int arr[] = { 1, 2, 3 };        // 3개의 원소
    int arr1[] = { 1, 2, 3, };      //
    printf("%d - %d\n", sizeof(arr), sizeof(arr1));
    // 배열 사용 : 배열변수이름[ 사용할 변수 위치 ]
    arr1[0];

    // 줄의 수
    for (int i = 0; i < 5; i++)
    {
        // 별의 수
        for (int j = 0; j < 5 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = 10; i < 27; i++)
    {
        for (int j = 1; j < 27; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    */
    
}
