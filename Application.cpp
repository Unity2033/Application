#include <iostream> // c++ 입출력 헤더 <iostream> 
#include <map>
#include <set>

using namespace std;

int main()
{
    // map
    /*
    // key와 value로 데이터를 저장시키는 자료구조입니다.
    map<string, int> mapData;

    mapData.insert(pair<string, int>("검", 100));
    mapData.insert(pair<string, int>("갑옷", 200));
    mapData.insert(pair<string, int>("투구", 300));
    mapData.insert(pair<string, int>("신발", 400));
    mapData.insert(pair<string, int>("장갑", 500));
    mapData.insert(pair<string, int>("각반", 1800));

    // 반복자
    map<string, int>::iterator iter;

    // begin() : map 데이터의 시작 주소를 반환합니다.
    // mapData.begin();

    // end() : map 데이터의 마지막 뒤에 있는 주소를 반환합니다.

    // 연관 컨테이너는 KEY 값이 중복될 수 없습니다.
    // 연관 컨테이너는 VALUE 값은 중복될 수 있습니다.

    // mapData.find("검")
    // find() : map에 있는 KEY 값이 있는지 없는 지 확인하는 함수입니다.
    // mapData.find("검")
    
    // map에서 데이터를 찾을 때 iterator를 사용하여 
    // map 내부에 데이터를 전체 탐색하여 있다면 KEY 값이 있는 거고,
    // map 내부에 데이터가 없다면 없는 형태로 동작합니다.
    if (mapData.find("검") != mapData.end())
    {
        cout << "KEY 값 검이 있습니다." << endl;
    }
    else
    {
        cout << "KEY 값이 없습니다.";
    }
   
    for (iter = mapData.begin(); iter != mapData.end(); iter++)
    {
        // iter->first : KEY
        cout << "KEY 값 : " << iter->first << endl;
        cout << "VALUE 값 : " << iter->second << endl;
    }

    cout << "------------------------------------------" << endl;

    map<string, int>::reverse_iterator iter1;

    for (iter1 = mapData.rbegin(); iter1 != mapData.rend(); ++iter1)
    {
        cout << "KEY 값 : " << iter1->first << endl;
        cout << "VALUE 값 : " << iter1->second << endl;
    }
    */

    // set
    set<int> setData;

    setData.insert(10);
    setData.insert(10);
    setData.insert(20);
    setData.insert(30);
    setData.insert(40);
    setData.insert(50);

    set<int>::iterator iter;

    for (iter = setData.begin(); iter != setData.end(); iter++)
    {
        cout << *iter << endl;
    }

    iter = setData.find(50);

    if (iter != setData.end())
    {
        cout << "값을 찾았습니다." << endl;
    }
    else
    {
        cout << "값을 찾지 못했습니다." << endl;
    }

    cout << "setData의 사이즈 : " << setData.size() << endl;


    return 0;
}

