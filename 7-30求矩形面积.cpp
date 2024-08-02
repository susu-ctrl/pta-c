#include <stdio.h>  
  
int main() {  
    int length, width; // 声明矩形的长和宽变量  
    int area; // 声明用于存储面积的变量  
  
    // 从用户那里获取矩形的长和宽
    scanf("%d %d", &length, &width);  
  
    // 计算面积  
    area = length * width;  
  
    // 输出面积  
    printf("%d\n", area);  
  
    return 0;  
}
