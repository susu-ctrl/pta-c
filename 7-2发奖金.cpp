#include<stdio.h>  
  
int main() {  
    int amount; // 总数  
    // 读取奖金金额  
    scanf("%d", &amount);  
      // 计算并分配每种面额的纸币张数  
        int hundred = amount / 100;  
        amount %= 100;  
        int fifty = amount / 50;  
        amount %= 50;  
        int twenty = amount / 20;  
        amount %= 20;  
        int ten = amount / 10;  
        amount %= 10;  
        int five = amount / 5;  
        amount %= 5;  
        int two = amount / 2;  
        int one = amount % 2;
    // 验证金额是否小于1万元  
    if (hundred > 9 ) { 
        // 输出结果  
        printf("100元: %d张\n", hundred);  
        printf(" 50元:  %d张\n", fifty);  
        printf(" 20元:  %d张\n", twenty);  
        printf(" 10元:  %d张\n", ten);  
        printf("  5元:  %d张\n", five);  
        printf("  2元:  %d张\n", two);  
        printf("  1元:  %d张", one);  
    } else {  
        // 输出结果  
        printf("100元:  %d张\n", hundred);  
        printf(" 50元:  %d张\n", fifty);  
        printf(" 20元:  %d张\n", twenty);  
        printf(" 10元:  %d张\n", ten);  
        printf("  5元:  %d张\n", five);  
        printf("  2元:  %d张\n", two);  
        printf("  1元:  %d张", one);
    }  
  
    return 0; // 程序正常退出  
}
