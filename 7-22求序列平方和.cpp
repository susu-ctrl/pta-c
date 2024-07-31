#include <stdio.h>  
  
int main() {  
    double n;  
    double s = 0.0; // 初始化为0.0，以便后续进行浮点运算  
  
    // 读取输入的整数n  
    scanf("%lf", &n);  
  
    // 计算平方和  
    s+=(n*(n+1)*(2*n+1))/6;
  
    // 输出结果，使用%.15g格式限定符  
    printf("%.15g\n", s);  
  
    return 0;  
}
