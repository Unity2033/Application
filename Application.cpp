#include <iostream> // c++ 입출력 헤더 <iostream> 
#include "Computer.h"

using namespace std;

class Character
{
    // 생성자란?
    // 클래스의 인스턴스가 생성되는 시점에 자동으로
    // 호출되는 특수한 멤버 함수입니다.

private :
    int x;
    int y;

public :
    // 생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
    // 생성자는 반환형이 존재하지 않습니다.

    Character(int m_x, int m_y) // 클래스의 이름과 동일하게 정의해주어야 합니다.
    {
        x = m_x;
        y = m_y;

        cout << "x : " << x << " y : " << y << endl;
    }

    // 소멸자
    // 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수입니다.
    ~Character() // ~클래스의 이름으로 정의해주어야 합니다. 
    {
        cout << "Character가 파괴되었습니다." << endl;
    }

    // const 함수
    // 함수 내부에서 값을 변경하지 못하도록 상수화하는 함수입니다.
    void Talk() const
    {    
        cout << "대화 진행" << endl;
    }
};

int main()
{
    // 생성자와 소멸자
    /*
    Character character(6,7);

    character.Talk();

    Character * champion = new Character(1, 9);

    // champion <= 0
    delete champion;

    // cout << "character의 크기 : " << sizeof(character) << endl;
    */

    // 클래스의 선언과 정의
    /*
    Computer samsung;

    samsung.Power();
    */


    return 0;
}

