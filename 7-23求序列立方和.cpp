#include <stdio.h>  
  
int main() {  
    double n;  
    double s = 0。0; // 初始化为0.0，以便后续进行浮点运算  
  
    // 读取输入的整数n  
    scanf("%lf", &n);  
  
    // 计算平方和  
    s+=(n*n*n*n+2*n*n*n+n*n)/4;
  
    // 输出结果，使用%.15g格式限定符  
    printf("%.15g\n", s);  
  
    return 0;  
}
