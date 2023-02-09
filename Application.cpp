#include <iostream> // c++ ����� ��� <iostream> 
#include <memory> // ����Ʈ �����Ϳ� ���õ� ��� ����

using namespace std;

class Player
{
public :

    // weak_ptr ������
    // �ϳ� �̻��� shared_ptr �ν��Ͻ��� �����ϴ� ��ü��
    // ���� ������ ����������, ���� ī��Ʈ�� ���Ե��� �ʴ� 
    // ����Ʈ �������Դϴ�.

    shared_ptr<Player> wPtr;

    int health = 100;

    Player()
    {
        std::cout << "Player ����" << endl;
    }

    ~Player()
    {
        std::cout << "Player �Ҹ�" << endl;
    }
};

int main()
{
    // ����Ʈ ������
    // ������ó�� �����ϴ� Ŭ���� ���ø����� 
    // ����� ���� �޸𸮸� �ڵ����� �����ϴ� �������Դϴ�.

#pragma region unique_ptr ������    
    // �ϳ��� �޸� ������ ����ų �� �ִ� �������Դϴ�.
    //
    // unique_ptr<Player> uPtr(new Player);
    // uPtr->health = 100;
    //
    // uPtr�� ������ �ִ� �޸� ������(�������� �Ҵ��� �޸�)��
    // uPtr1���� �޸� �������� �Ѱ��ִ� �����Դϴ�.
    // unique_ptr<Player> uPtr1 = std::move(uPtr);
    //
    // uPtr1->health = 300;
    //
    // uPtr->health = 100;
#pragma endregion

    #pragma region shared_ptr ������
    // � �ϳ��� ��ü�� �����ϴ� ����Ʈ �������� ������
    // �����ϴ� �������Դϴ�.

    // �����ϰ� �ִ� ����Ʈ �������� ���� ���� ī��Ʈ��� �մϴ�.
 
    // ���� ī��Ʈ(Reference Counting)
    // �ش� �޸𸮸� �����ϴ� �����Ͱ� ��� �ִ� �� ��Ÿ����
    // ���Դϴ�.

    // �����ϴ� �����Ͱ� �߰��Ǹ� 1�� �����ǰ� �����ϴ� �����Ͱ�
    // �������� 1�� �����մϴ�.

    // ù ��° �ʱ�ȭ ���
    // shared_ptr<int> sPtr(new int(5));

    // �� ��° �ʱ�ȭ ���
    // shared_ptr<int> sPtr1 = make_shared<int>(5);

    // shared_ptr<Player> ptr1(new Player);

    // {
       // shared_ptr<Player> ptr2 = ptr1;
       // cout << "ptr2�� ���� ī��Ʈ : " << ptr2.use_count() << endl;
    // }

    // cout << "ptr1�� ���� ī��Ʈ : " << ptr1.use_count() << endl;

#pragma endregion

    shared_ptr<Player> player1(new Player);
    shared_ptr<Player> player2(new Player);

    cout << "player1" << player1.use_count() << endl;
    cout << "player2" << player2.use_count() << endl;

    player1->wPtr = player2;
    player2->wPtr = player1;

    cout << "player1" << player1.use_count() << endl;
    cout << "player2" << player2.use_count() << endl;

    return 0;
}

