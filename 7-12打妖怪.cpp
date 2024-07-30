#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  

int main() {
    int n, v, h;

    // 读取输入  
    scanf("%d %d", &v, &h);

    // 计算大圣需要打的棒数  
    n = v / h;  // 首先计算整除的棒数  
    if (v % h != 0) {  // 如果v除以h有余数，则需要再打一棒  
        n++;
    }

    // 输出结果  
    printf("%d\n", n);

    return 0;
}
