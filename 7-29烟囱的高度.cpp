#include <stdio.h>  
#include <math.h>  
#define M_PI 3.14159265358979323846

// 将度分秒转换为弧度  
double degreesToRadians(int degrees, int minutes, double seconds) {  
    double totalSeconds = degrees * 3600 + minutes * 60 + seconds;  
    return totalSeconds / 3600.0 * M_PI / 180.0;  
}  
  
int main() {  
    double a, b;  
    int degrees, minutes;  
    double seconds;  
    double thetaRadians, h;  
  
    // 读取距离和眼睛高度  
    scanf("%lf %lf", &a, &b);  
  
    // 读取仰角的度、分、秒  
    scanf("%d %d %lf", &degrees, &minutes, &seconds);  
  
    // 将仰角转换为弧度  
    thetaRadians = degreesToRadians(degrees, minutes, seconds);  
  
    // 使用三角函数计算烟囱高度  
    h = a * tan(thetaRadians) + b;  
  
    // 输出结果，保留两位小数  
    printf("%.2f\n", h);  
  
    return 0;  
}
