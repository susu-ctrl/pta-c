#include<stdio.h>  

int main() {
    int amount; // ����  
    int hundred, fifty, twenty, ten, five, two, one; // �ֱ��Ӧ��������ֽ������  

    // ��ȡ������  
    scanf("%d", &amount);

    // ��֤����Ƿ����1��Ԫ  
    if (amount > 10000) {
        // ���������1��Ԫ�����������  
        printf("����������ơ�\n");
        return 1; // ͬ�������㷵��ֵ��ʾ�����쳣�˳�  
    }

    // ���㲢����ÿ������ֽ������  
    hundred = amount / 100;
    amount %= 100;
    fifty = amount / 50;
    amount %= 50;
    twenty = amount / 20;
    amount %= 20;
    ten = amount / 10;
    amount %= 10;
    five = amount / 5;
    amount %= 5;
    two = amount / 2;
    amount %= 2;
    one = amount;

    // ������  
    printf("100Ԫ: %d��\n", hundred);
    printf(" 50Ԫ:  %d��\n", fifty);
    printf(" 20Ԫ:  %d��\n", twenty);
    printf(" 10Ԫ:  %d��\n", ten);
    printf("  5Ԫ:  %d��\n", five);
    printf("  2Ԫ:  %d��\n", two);
    printf("  1Ԫ:  %d��\n", one);

    return 0; // ���������˳�  
}