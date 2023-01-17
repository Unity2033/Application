#pragma once
#include <iostream> // c++ 입출력 헤더 <iostream> 

int main()
{
    // 범위 기반 반복문
    /*
    // 시작과 끝을 알려주지 않아도 처음부터 끝까지
    // 순회하는 반복문입니다.

    int data[5] = { 10,20,30,40,50 };

    for (const auto & x : data)
    {
        // 범위 기반 반복문은 인덱스에 접근이 불가능합니다.
        std::cout << x << std::endl;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << data[i] << std::endl;
    }
    */

    // 동적 할당
    // new(메모리 할당), delete(메모리 해제)
    int* ptr = new int;

    *ptr = 100;

    std::cout << "ptr이 가리키는 값 : " << *ptr << std::endl;
    std::cout << "ptr의 값 : " << ptr << std::endl;

    // 동적 메모리 할당 해제
    delete ptr;

    std::cout << "ptr이 가리키는 값 : " << *ptr << std::endl;
    std::cout << "ptr의 값 : " << ptr << std::endl;


    return 0;
}

