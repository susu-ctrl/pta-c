#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
	
	int main() {
		long w, n, d;//w表示今天的日期数，n表示经过的天数，d表示未来的星期数

		//读取输入
		scanf("%ld %ld", &w, &n);

		//计算未来的心情数
		d = (w + n) % 7;

		//输出
		printf("%ld", d);
}