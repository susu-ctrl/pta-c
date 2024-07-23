#include <stdio.h>  

int main() {
    int startTime, elapsedMinutes;
    scanf("%d %d", &startTime, &elapsedMinutes);

    // 提取起始时间的小时和分钟  
    int startHour = startTime / 100;
    int startMinute = startTime % 100;

    // 计算总分钟数  
    int totalMinutes = startHour * 60 + startMinute + elapsedMinutes;

    // 计算结束时间的小时和分钟  
    int endHour = totalMinutes / 60;
    int endMinute = totalMinutes % 60;

    // 格式化结束时间为四位数（但注意小时和分钟可能不足两位）  
    // 我们将直接打印小时和分钟，不添加前导零（除非分钟是单个数字）  
    // 但由于题目要求至少保证结果长度为3（小时至少一位，分钟至少两位），  
    // 如果小时是单个数字，我们需要在前面添加一个空格（虽然这不严格符合题目“没有前导零”的要求，  
    // 但由于C语言字符串处理的特点，我们通常不这么做，而是直接打印）  
    // 或者我们可以假设结果总是四位数（通过添加前导零到小时），但这里我们简化处理  

    // 直接打印结果，不添加不必要的空格或零  
    printf("%d%02d\n", endHour, endMinute);

    // 注意：上面的printf语句已经满足了题目的基本要求，  
    // 因为即使小时是个位数，分钟也总是两位数（通过%02d格式化），  
    // 所以结果总长度至少是3（小时1位+分钟2位），但通常会是4位（除非小时为0）  

    return 0;
}