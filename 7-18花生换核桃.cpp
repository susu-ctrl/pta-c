#include <stdio.h>  
  
int main() {  
    int p, w; // 声明整型变量p用于存储花生数，w用于存储核桃数  
  
    // 读取小松鼠拥有的花生数  
    scanf("%d", &p); // 读取用户输入的花生数并存储在变量p中  
  
    // 然后将组数乘以2得到最多能换到的核桃数  
    w = (p / 7) * 2; // 计算核桃数并存储在变量w中  
  
    // 输出结果  
    printf("%d\n", w); // 输出核桃数
  
    return 0;
}
