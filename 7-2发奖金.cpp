#include<stdio.h>  

int main() {
    int amount; // 总数  
    int hundred, fifty, twenty, ten, five, two, one; // 分别对应各种面额的纸币张数  

    // 读取奖金金额  
    scanf("%d", &amount);

    // 验证金额是否大于1万元  
    if (amount > 10000) {
        // 如果金额大于1万元，则输出错误  
        printf("奖金金额超过限制。\n");
        return 1; // 同样，非零返回值表示程序异常退出  
    }

    // 计算并分配每种面额的纸币张数  
    hundred = amount / 100;
    amount %= 100;
    fifty = amount / 50;
    amount %= 50;
    twenty = amount / 20;
    amount %= 20;
    ten = amount / 10;
    amount %= 10;
    five = amount / 5;
    amount %= 5;
    two = amount / 2;
    amount %= 2;
    one = amount;

    // 输出结果  
    printf("100元: %d张\n", hundred);
    printf(" 50元:  %d张\n", fifty);
    printf(" 20元:  %d张\n", twenty);
    printf(" 10元:  %d张\n", ten);
    printf("  5元:  %d张\n", five);
    printf("  2元:  %d张\n", two);
    printf("  1元:  %d张\n", one);

    return 0; // 程序正常退出  
}