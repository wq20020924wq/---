#include<stdio.h>
#include<string.h>
//abcdef
//��ת2λ��cdefab��
//abcdefabcdef;�ظ�һ�ν������������
int left_move(char* arr, char* arr1,char*arr2)
{
	int len1 = strlen(arr);
	int len2 = strlen(arr1);
	if (len1 != len2)
	{
		return 0;
	}
	strncat_s(arr,50,arr,30);
	char* wq = strstr(arr, arr1);
	if (wq == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr[30]="abcdef";
	char arr2[30] = "abcdef";
	char arr1[50] = "cdefab";
	int ret=left_move(arr, arr1,arr2);
	if (ret == 0)
	{
		printf("û�ҵ�");
	}
	else
	{
		printf("�ҵ���");
	}
	return 0;
}