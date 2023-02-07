#include <iostream> // c++ ����� ��� <iostream> 
#include <map>
#include <set>

using namespace std;

int main()
{
    // map
    /*
    // key�� value�� �����͸� �����Ű�� �ڷᱸ���Դϴ�.
    map<string, int> mapData;

    mapData.insert(pair<string, int>("��", 100));
    mapData.insert(pair<string, int>("����", 200));
    mapData.insert(pair<string, int>("����", 300));
    mapData.insert(pair<string, int>("�Ź�", 400));
    mapData.insert(pair<string, int>("�尩", 500));
    mapData.insert(pair<string, int>("����", 1800));

    // �ݺ���
    map<string, int>::iterator iter;

    // begin() : map �������� ���� �ּҸ� ��ȯ�մϴ�.
    // mapData.begin();

    // end() : map �������� ������ �ڿ� �ִ� �ּҸ� ��ȯ�մϴ�.

    // ���� �����̳ʴ� KEY ���� �ߺ��� �� �����ϴ�.
    // ���� �����̳ʴ� VALUE ���� �ߺ��� �� �ֽ��ϴ�.

    // mapData.find("��")
    // find() : map�� �ִ� KEY ���� �ִ��� ���� �� Ȯ���ϴ� �Լ��Դϴ�.
    // mapData.find("��")
    
    // map���� �����͸� ã�� �� iterator�� ����Ͽ� 
    // map ���ο� �����͸� ��ü Ž���Ͽ� �ִٸ� KEY ���� �ִ� �Ű�,
    // map ���ο� �����Ͱ� ���ٸ� ���� ���·� �����մϴ�.
    if (mapData.find("��") != mapData.end())
    {
        cout << "KEY �� ���� �ֽ��ϴ�." << endl;
    }
    else
    {
        cout << "KEY ���� �����ϴ�.";
    }
   
    for (iter = mapData.begin(); iter != mapData.end(); iter++)
    {
        // iter->first : KEY
        cout << "KEY �� : " << iter->first << endl;
        cout << "VALUE �� : " << iter->second << endl;
    }

    cout << "------------------------------------------" << endl;

    map<string, int>::reverse_iterator iter1;

    for (iter1 = mapData.rbegin(); iter1 != mapData.rend(); ++iter1)
    {
        cout << "KEY �� : " << iter1->first << endl;
        cout << "VALUE �� : " << iter1->second << endl;
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
        cout << "���� ã�ҽ��ϴ�." << endl;
    }
    else
    {
        cout << "���� ã�� ���߽��ϴ�." << endl;
    }

    cout << "setData�� ������ : " << setData.size() << endl;


    return 0;
}

