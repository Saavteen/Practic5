#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, i;
    int dp[10001]; // Масив для зберігання послідовностей
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);
    dp[1] = 2; // Ініціалізація першого елементу масиву
    dp[2] = 3;
    for (i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 12345;
    }
    printf("Кількість шуканих послідовностей довжиною %d: %d\n", n, dp[n]);
    return 0;
}