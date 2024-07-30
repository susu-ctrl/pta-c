#include <stdio.h>  
#include <math.h> // 引入math.h以使用ceil函数  
  
int main() {  
    double b, w; // 使用double类型以支持小数  
    int n;  
  
    // 读取输入  
    scanf("%lf %lf", &b, &w); // 使用%lf来读取double类型的值  
  
    // 计算需要的瓶子数量  
    // 注意：ceil函数返回double类型，但我们需要int类型的结果，所以进行类型转换  
    n = (int)ceil(w / b);  
  
    // 输出结果  
    printf("%d\n", n);  
  
    return 0;  
}
