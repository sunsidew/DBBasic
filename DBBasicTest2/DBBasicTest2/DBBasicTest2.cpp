// DBBasicTest2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <stdio.h>
#include <string.h>

#define M 100

int _tmain(int argc, _TCHAR* argv[])
{
	char a[M+1];

	printf("Type word : ");
	scanf_s("%s",&a,M+1);

	int i,j;
	int t;
	int n = strlen(a);

	for(i = 0 ; i < n ; i++)
	{
		for(j = i+1 ; j < n ; j++)
		{
			if(a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}

	printf("Sorted word : %s\n",a);

	return 0;
}

