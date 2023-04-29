#include <cstdio>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double fahr, cels;
    printf("\n Введите температуру по Фаренгейту\n");
    scanf("%lf", &fahr);
    cels = 5.0 / 9 * (fahr - 32);
    printf(" По Фаренгейту: %6.2lf, по Цельсию: %6.2lf\n", fahr, cels);
}