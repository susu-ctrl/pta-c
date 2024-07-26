#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>  

int main() {
    int amount = 0;  // 定义并初始化一个整型变量amount，用于存储累加的结果  
    int a, b;  // 定义两个整型变量a和b，用于存储用户输入的两个数  

    // 从标准输入读取两个整数，并分别存储到变量a和b中  
    scanf("%d %d", &a, &b);

    // 使用for循环进行累加操作，循环次数由b决定  
    for (int i = 0; i < b; i++) {
        amount = amount + a;  // 将a的当前值加到amount上  
        a--;  // 将a的值减少1  
        // 注意：这里a的值在每次循环时都会减少，可能会影响最终amount的值  
    }

    // 打印变量amount的值到标准输出  
    printf("%d", amount);

    return 0;  // 主函数返回0，表示程序正常结束  
}
