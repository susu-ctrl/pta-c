#include<stdio.h>  
  
int main() {  
    long long int n, amount; // 定义变量n用于存储用户输入的数，amount用于存储计算结果  
  
    // 从标准输入读取一个整数到变量n中  
    scanf("%lld", &n);  
  
    // 计算从1加到n的和，即等差数列求和公式：(1 + n) * n / 2  
    // 注意：这里保持了操作的顺序，先加法后除法，以避免在加法阶段就溢出  
    amount = (1LL + n) * n / 2; // 使用1LL来确保1是long long int类型，但在这个表达式中其实不是必需的  
  
    // 打印计算结果到标准输出  
    printf("%lld\n", amount);  
  
    return 0; // 程序正常结束  
}
