#include<stdio.h>  
  
int main(){  
    double b, h;  
    double a = 0;  
    scanf("%lf %lf", &b, &h); // 读取底和高  
    a = (b * h) / 2; // 计算三角形面积  
    printf("%.2lf", a); // 输出面积，保留两位小数并四舍五入  
    return 0;  
}
