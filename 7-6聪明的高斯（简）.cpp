#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>  

int main() {
    int n, amount = 0;  // 定义变量n用于存储用户输入的数，amount用于存储计算结果  

    // 从标准输入读取一个整数到变量n中   
    scanf("%d", &n);

    // 计算从1加到n的和，即等差数列求和公式：(1 + n) * n / 2  
    amount = (1 + n) * n / 2;

    // 打印计算结果到标准输出  
    printf("%d", amount);

    return 0;  // 程序正常结束  
}