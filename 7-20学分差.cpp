#include <stdio.h>  
  
int main() {  
    int z, w, s; // z 和 w 分别代表小张和小王完成的学分，s 代表两者相差的学分  
  
    // 读取输入  
    scanf("%d %d", &z, &w);  
  
    // 计算相差的学分  
    // 如果 z > w，则 s = z - w；如果 z < w，则 s = w - z
    if (z > w) {  
        s = z - w;  
    } else {  
        s = w - z;  
    }
  
    // 输出结果  
    printf("%d\n", s);  
  
    return 0;  
}
