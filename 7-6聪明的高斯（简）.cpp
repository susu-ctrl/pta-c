#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>  

int main() {
    int n, amount = 0;  // �������n���ڴ洢�û����������amount���ڴ洢������  

    // �ӱ�׼�����ȡһ������������n��   
    scanf("%d", &n);

    // �����1�ӵ�n�ĺͣ����Ȳ�������͹�ʽ��(1 + n) * n / 2  
    amount = (1 + n) * n / 2;

    // ��ӡ����������׼���  
    printf("%d", amount);

    return 0;  // ������������  
}