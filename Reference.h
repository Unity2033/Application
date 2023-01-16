#pragma once
#include <iostream> // c++ 입출력 헤더 <iostream> 

// (c++) & 참조 연산자
/*
void PointerFunction(int * x)
{
    std::cout << "PointerFunction x의 주소 : " << &x << std::endl;
    *x = 10000;

}

void ReferenceFunction(int & x)
{
    std::cout << "ReferenceFunction x의 주소 : " << &x << std::endl;
    x = 1000;
}
*/

// 디폴트 매개변수는 오른쪽에서부터 정의해야 합니다.
void Calculator(int x, int y = 20, int z = 100)
{
    std::cout << "x의 값 : " << x << std::endl;
    std::cout << "y의 값 : " << y << std::endl;
    std::cout << "z의 값 : " << z << std::endl;
}

int main()
{
    // (c++) & 참조 연산자
    /*
    // 포인터의 이름이나 주소 앞에 사용하여
    // 포인터에 가리키는 주소에 저장된 값을 반환하는 연산자입니다.

    // int value = 100;
    // int value2 = 200;

    // int & ref = value;

    // 참조 연산자는 선언과 동시에 초기화가 되어야 합니다.
    // ex) int & ref1;

    // std::cout << &ref << std::endl;
    // std::cout << &value << std::endl;

    // 한번 초기화가 되면 다른 변수를 참조할 수 없습니다.
    // ref = value2;

    int data = 10;

    PointerFunction(&data);
    std::cout << "data의 값 : " << data << std::endl;

    ReferenceFunction(data);
    std::cout << "data의 값 : " << data << std::endl;
    */

    // 기본 매개변수
    /*
    // 함수를 선언 및 정의할 때 사용자가 미리 기본값을 지정하는 매개변수입니다.
    int variable = 300;

    // x = 100 <- [100]
    // Calculator(variable) <- [300]
    // x <- variable, y <- 10
    Calculator(variable);
    */

    // 자료형 추론
    // 자료형

    // 들어오는 값에 따라 자동으로 자료형으로 추론해주는 자료형입니다.
    auto signal = 100;
    auto character = 'A';
    auto decimal = 36.5;

    std::cout << sizeof(character) << std::endl;
    std::cout << sizeof(signal) << std::endl;
    std::cout << sizeof(decimal) << std::endl;


    return 0;
}

