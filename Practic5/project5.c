#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, i;
    int dp[10001]; // ����� ��� ��������� �������������
    printf("������ ������� ����������� n: ");
    scanf("%d", &n);
    dp[1] = 2; // ����������� ������� �������� ������
    dp[2] = 3;
    for (i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 12345;
    }
    printf("ʳ������ ������� ������������� �������� %d: %d\n", n, dp[n]);
    return 0;
}