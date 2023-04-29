#include <cstdio>

using namespace std;

int main () {
    int key;
    printf("key = %d\n", key);
    printf("\n Нажмите одну из курсорных клавиш:\n");
    key = getchar(); 
    printf("key = %d\n", key);
    key = getchar();
    printf("key = %d\n", key);
    switch( key ) {
        case 77: printf("стрелка вправо\n"); break;
        case 75: printf("стрелка влево\n"); break;
        case 72: printf("стрелка вверх\n"); break;
        case 80: printf("стрелка вниз\n"); break;
        default: printf("не стрелка\n"); break;
    }
}