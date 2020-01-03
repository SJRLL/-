#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[] = "shujirnui@shushu.net";
	char *ret = NULL;
	char *p = "@.";
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	system("pause");
	return 0;
}