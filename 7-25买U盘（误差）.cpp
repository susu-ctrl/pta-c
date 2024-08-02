#include<stdio.h>  
  
int main(){  
    double total, price; // 定义两个双精度浮点数变量来存储总经费和单价  
    scanf("%lf %lf", &total, &price); // 从标准输入读取总经费和单价  
  
    // 注意：下面的代码行是错误的，因为它试图将浮点数与整数进行不恰当的操作（如果不加0.000001测试点无法通过）  
     int res = total/price + 0.000001; // 这不会四舍五入，且+0.000001对结果无影响  
  
    // 正确的做法是直接进行浮点数除法，并将结果转换为整数（向下取整）  
    //int maxUsbCount = (int)(total / price); // 计算最多可购买的U盘数量，并向下取整  
  
    // 输出结果  
    printf("%d", res); // 打印最多可购买的U盘数量  
  
    return 0; // 程序正常结束  
}
