#include <stdio.h>  
  
int main() {  
    double bookAmount, discountAmount, paymentAmount;  
      
    // 输入购书金额  
    scanf("%lf", &bookAmount);  
      
    // 计算可以减的金额  
    // 每满100元减50元，所以可减金额是购书金额除以100再乘以50（注意处理整数部分）  
    discountAmount = (long)(bookAmount / 100) * 50;  
      
    // 计算需要支付的金额  
    paymentAmount = bookAmount - discountAmount;  
      
    // 输出结果  
    printf("%.2lf\n", discountAmount);  
    printf("%.2lf\n", paymentAmount);  
      
    return 0;  
}
