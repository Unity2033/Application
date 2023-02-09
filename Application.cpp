#include <iostream> // c++ 입출력 헤더 <iostream> 
#include <memory> // 스마트 포인터와 관련된 헤더 파일

using namespace std;

class Player
{
public :

    // weak_ptr 포인터
    // 하나 이상의 shared_ptr 인스턴스가 소유하는 객체에
    // 대한 접근을 제공하지만, 참조 카운트에 포함되지 않는 
    // 스마트 포인터입니다.

    shared_ptr<Player> wPtr;

    int health = 100;

    Player()
    {
        std::cout << "Player 생성" << endl;
    }

    ~Player()
    {
        std::cout << "Player 소멸" << endl;
    }
};

int main()
{
    // 스마트 포인터
    // 포인터처럼 동작하는 클래스 템플릿으로 
    // 사용이 끝난 메모리를 자동으로 해제하는 포인터입니다.

#pragma region unique_ptr 포인터    
    // 하나의 메모리 공간만 가리킬 수 있는 포인터입니다.
    //
    // unique_ptr<Player> uPtr(new Player);
    // uPtr->health = 100;
    //
    // uPtr이 가지고 있던 메모리 소유권(동적으로 할당한 메모리)를
    // uPtr1에게 메모리 소유권을 넘겨주는 과정입니다.
    // unique_ptr<Player> uPtr1 = std::move(uPtr);
    //
    // uPtr1->health = 300;
    //
    // uPtr->health = 100;
#pragma endregion

    #pragma region shared_ptr 포인터
    // 어떤 하나의 객체를 참조하는 스마트 포인터의 갯수를
    // 참조하는 포인터입니다.

    // 참조하고 있는 스마트 포인터의 수를 참조 카운트라고 합니다.
 
    // 참조 카운트(Reference Counting)
    // 해당 메모리를 참조하는 포인터가 몇개가 있는 지 나타내는
    // 값입니다.

    // 참조하는 포인터가 추가되면 1씩 증가되고 참조하는 포인터가
    // 끊어지면 1씩 감소합니다.

    // 첫 번째 초기화 방법
    // shared_ptr<int> sPtr(new int(5));

    // 두 번째 초기화 방법
    // shared_ptr<int> sPtr1 = make_shared<int>(5);

    // shared_ptr<Player> ptr1(new Player);

    // {
       // shared_ptr<Player> ptr2 = ptr1;
       // cout << "ptr2의 참조 카운트 : " << ptr2.use_count() << endl;
    // }

    // cout << "ptr1의 참조 카운트 : " << ptr1.use_count() << endl;

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

