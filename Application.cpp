#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 10000
#include <iostream> // c++ 입출력 헤더 <iostream> 

using namespace std;

void Function(const char * textName)
{
    FILE* file = fopen(textName, "r");

    char buffer[BUFFER_SIZE] = { 0, };

    fread(buffer, 1, BUFFER_SIZE, file);
    printf("%s", buffer);

    fclose(file);

}

int main()
{
    // 파일 입출력
    // fopen(파일의 이름, 파일 모드)
    // w = write <- 쓰기
    // r = read <- 읽기 
    
    // FILE * file = fopen("data.txt", "w");
    // fputs("Game Password", file);
    // fclose(file);

    // 파일 불러오기 
    Function("Dragon.txt");

    return 0;
}

