#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  
  
int main() {  
    unsigned long n;
  
    // 读取输入，使用 %lx 来匹配 unsigned long 类型的十六进制数  
    scanf("%lx", &n);  
  
    // 输出结果，使用 %lu 来匹配 unsigned long 类型的十进制数  
    printf("%lu\n", n);  
  
    return 0;  
}
