#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
	
	int main() {
		long w, n, d;//w��ʾ�������������n��ʾ������������d��ʾδ����������

		//��ȡ����
		scanf("%ld %ld", &w, &n);

		//����δ����������
		d = (w + n) % 7;

		//���
		printf("%ld", d);
}