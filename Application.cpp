#include <iostream> // c++ ����� ��� <iostream> 
#include <math.h> // ���� ���� ���̺귯��

char alphabet = 'B';

struct Player
{
    int x;
    int y;
};

struct Monster
{
    int x;
    int y;
};

int main()
{
    // c++ ����� 
    /*
    bool condition = true; // 1 byte �޸�

    char blood = 'A';
    int value = 100;
    float pi = 3.14;
    
    // C++���� ������ �Է¹޴� ���
    // >> (���� ������)
    // ���� �ȿ� �ִ� ������ �����ų �� �ִ�
    // �������Դϴ�.
    // std::cin >> value;

    if (condition)
    {
        // << (���� ������)
        // �Էµ� �����ʹ� ��� ��ġ�� �����ϸ�,
        // "<<" �����ڸ� ����Ͽ� �ڽ��� ������ ����
        // ��ȯ�ϴ� �������Դϴ�.

        std::cout << "�ȳ��ϼ���." << std::endl;
        std::cout << blood << std::endl;
        std::cout << value << std::endl;
        std::cout << pi << std::endl;
    }
    */

    // ���� ���� ������
    /*
    // ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ�
    // ����ϴ� �������Դϴ�.
    char alphabet = 'A';
    
    std::cout << "���� ���� alphabet�� �� : " << alphabet << std::endl;
    std::cout << "���� ���� alphabet�� �� : " << ::alphabet << std::endl;
    */

    // ���ڿ�
    /*
    std::string name = "Leesin";

    std::cout << "name�� �� : " << name << std::endl;
    */

    Player player;
    Monster monster = {5, 5};

    player.x = 0;
    player.y = 0;

    int tempX = player.x - monster.x;
    int tempY = player.y - monster.y;

    // ��Ʈ
    std::cout << sqrt(pow(tempX,2) + pow(tempY,2)) << std::endl;

    // �ŵ�����
    // std::cout << pow(10, 2) << std::endl;

}

