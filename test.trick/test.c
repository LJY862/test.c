#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };//字符数组
again:
	printf("请注意，你的电脑将在60s内关机！如果输入:我是猪,就取消关机\n");
	system("shutdown -s -t 60");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//判断相等
	{
		system("shutdown -a");
		printf("你很乖,给你取消关机了\n");
	}
	else {
		goto again;
	}
	return 0;
}