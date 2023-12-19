#include <iostream>

//1. 기능 두 가지를 사전에 준비해야 한다 (아래 두 줄 복사하기)
#include <stdlib.h>  // 표준기능 집합
#include <Windows.h> // 윈도우에서 사용되는 표준기능 집합

int main()
{
    // 2. 시드(랜덤 숫자 생성에 필요한 기준 데이터) 생성
    srand(GetTickCount64()); //현재 시간을 토대로 시드를 생성한다는 코드

    // 3. 진짜 랜덤 숫자 생성
    //랜덤으로 만들어지는 숫자 : 약 -32500부터 약 32500 사이 (정확하게는 65535/2를 음수 양수로 정한 범위까지)
    int randomNumber = rand();

    //4. 랜덤에 범위가 필요한 경우 (1부터 100까지라든가) 범위를 지정하는 방법
    randomNumber = rand() % 100 + 1;

    // 번외편
    // 0 ~ 2까지 랜덤으로 생성
    randomNumber = rand() % 3;
}