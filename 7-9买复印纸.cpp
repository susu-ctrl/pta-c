#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  

int main() {
    double total;
    double parts;
    int result;

    scanf("%lf %lf", &total, &parts); // 读取两个双精度浮点数  

    // 计算 total 除以 parts 的结果  
    result = total / parts;

    // 输出结果，保留6位小数  
    printf("%d\n", result);

    return 0;
}
