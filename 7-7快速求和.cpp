
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>  

int main() {
    double s = 0.0;  // 初始化s为0.0，明确其为double类型  
    double n;

    scanf("%lf", &n);  // 读取一个双精度浮点数  
    s = 1.0 - (1.0 / (n + 1.0));  // 确保使用浮点数进行计算  
    printf("%.6lf\n", s);  // 使用%.6lf来指定输出6位小数，并换行  
    return 0;
}
