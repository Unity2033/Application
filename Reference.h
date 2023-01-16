#pragma once
#include <iostream> // c++ ����� ��� <iostream> 

// (c++) & ���� ������
/*
void PointerFunction(int * x)
{
    std::cout << "PointerFunction x�� �ּ� : " << &x << std::endl;
    *x = 10000;

}

void ReferenceFunction(int & x)
{
    std::cout << "ReferenceFunction x�� �ּ� : " << &x << std::endl;
    x = 1000;
}
*/

// ����Ʈ �Ű������� �����ʿ������� �����ؾ� �մϴ�.
void Calculator(int x, int y = 20, int z = 100)
{
    std::cout << "x�� �� : " << x << std::endl;
    std::cout << "y�� �� : " << y << std::endl;
    std::cout << "z�� �� : " << z << std::endl;
}

int main()
{
    // (c++) & ���� ������
    /*
    // �������� �̸��̳� �ּ� �տ� ����Ͽ�
    // �����Ϳ� ����Ű�� �ּҿ� ����� ���� ��ȯ�ϴ� �������Դϴ�.

    // int value = 100;
    // int value2 = 200;

    // int & ref = value;

    // ���� �����ڴ� ����� ���ÿ� �ʱ�ȭ�� �Ǿ�� �մϴ�.
    // ex) int & ref1;

    // std::cout << &ref << std::endl;
    // std::cout << &value << std::endl;

    // �ѹ� �ʱ�ȭ�� �Ǹ� �ٸ� ������ ������ �� �����ϴ�.
    // ref = value2;

    int data = 10;

    PointerFunction(&data);
    std::cout << "data�� �� : " << data << std::endl;

    ReferenceFunction(data);
    std::cout << "data�� �� : " << data << std::endl;
    */

    // �⺻ �Ű�����
    /*
    // �Լ��� ���� �� ������ �� ����ڰ� �̸� �⺻���� �����ϴ� �Ű������Դϴ�.
    int variable = 300;

    // x = 100 <- [100]
    // Calculator(variable) <- [300]
    // x <- variable, y <- 10
    Calculator(variable);
    */

    // �ڷ��� �߷�
    // �ڷ���

    // ������ ���� ���� �ڵ����� �ڷ������� �߷����ִ� �ڷ����Դϴ�.
    auto signal = 100;
    auto character = 'A';
    auto decimal = 36.5;

    std::cout << sizeof(character) << std::endl;
    std::cout << sizeof(signal) << std::endl;
    std::cout << sizeof(decimal) << std::endl;


    return 0;
}

