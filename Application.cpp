#include <iostream> // c++ 입출력 헤더 <iostream> 

using namespace std;

namespace A
{ 
    int value = 10;

    void Information()
    {
       cout << "A 개발자 영역" << endl;
    }
}  // <- 이 영역을 벗어나면 메모리에서 사라집니다.

namespace B
{
    int count = 20;
   

    void Information()
    {
        cout << "B 개발자 영역" << endl;
    }
}

// 범위를 생략해서 사용할 수 있는 기능
using namespace A;

// 클래스란?
// 사용자 정의 데이터 유형으로 속성과 함수가 포함되어
// 있으며, 클래스를 통해 객체를 생성하여 접근하고 
// 사용할 수 있는 집합체입니다.
class Monster
{
// private이란?
// 클래스 내부에서만 접근할 수 있도록 설정하는 제한자입니다.
private :
    // 기본 접근 지정자
    // 접근 지정자를 설정하지 않으면 기본적으로
    // private 접근 지정자로 설정됩니다.
    int health;
    float damage;

// public이란?
// 클래스 내부와 클래스 외부에서 접근할 수 있도록 설정하는 제한자입니다.
public :
    // 접근 지정자란? 
    // 클래스 내부의 포함되어 있는 속성에
    // 접근 범위를 제한하는 지정자입니다.

    void Attack()
    {
        cout << "공격" << endl;
        name = "monster";
    }

// protected란?
// 클래스 내부와 자기가 상속하고 있는 클래스에서만 접근할 수 있도록 설정하는 제한자입니다.
protected :
    string name;

};

class Goblin : public Monster
{
    void Information()
    {
        name = "Goblin";
        Attack();
    }
};

int main()
{
    // 이름 공간
    /*
    // 속성을 구분할 수 있도록 유효 범위를 설정하는
    // 영역입니다.
    cout << value << endl;
    Information();

    cout << B::count << endl;
    B::Information();
    */

    // 클래스의 인스턴스화
    Monster orc;

    Monster * dragon = new Monster;
    dragon->Attack();

    Goblin object;
  
    orc.Attack();
   
    return 0;
}

