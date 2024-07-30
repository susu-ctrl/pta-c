#include <stdio.h>  
  
int main() {  
    int n, a, b, c, p, q, r, x;  
  
    // 读取输入  
    scanf("%d %d %d %d %d %d %d", &n, &a, &b, &c, &p, &q, &r);  
  
    // 计算三种球全都会打的人数 x  
    x = n - (a + b + c - p - q - r);  
  
    // 输出结果  
    printf("%d\n", x);  
  
    return 0;  
}
