#pragma once
#include <iostream> // c++ ����� ��� <iostream> 

int main()
{
    // ���� ��� �ݺ���
    /*
    // ���۰� ���� �˷����� �ʾƵ� ó������ ������
    // ��ȸ�ϴ� �ݺ����Դϴ�.

    int data[5] = { 10,20,30,40,50 };

    for (const auto & x : data)
    {
        // ���� ��� �ݺ����� �ε����� ������ �Ұ����մϴ�.
        std::cout << x << std::endl;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << data[i] << std::endl;
    }
    */

    // ���� �Ҵ�
    // new(�޸� �Ҵ�), delete(�޸� ����)
    int* ptr = new int;

    *ptr = 100;

    std::cout << "ptr�� ����Ű�� �� : " << *ptr << std::endl;
    std::cout << "ptr�� �� : " << ptr << std::endl;

    // ���� �޸� �Ҵ� ����
    delete ptr;

    std::cout << "ptr�� ����Ű�� �� : " << *ptr << std::endl;
    std::cout << "ptr�� �� : " << ptr << std::endl;


    return 0;
}

