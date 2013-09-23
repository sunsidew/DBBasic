// DBBasicTest1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#define M 10

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	unsigned long long a[M+1];

	a[1] = 2;
	a[2] = 3;

	printf("f(n) : ");
	printf("%I64u %I64u ",a[1],a[2]);

	for(i = 3 ; i <= 9 ; i++)
	{
		a[i] = a[i-1] * a[i-2];
		printf("%I64u ",a[i]);
	}
	printf("\n");

	printf("[ f(9) : %I64u ]\n", a[9]);


	return 0;
}

