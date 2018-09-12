
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gtlog.h"

void test()
{
	//º”‘ÿ»’÷æ
	if (zlogInit("../test.conf", "ex_level"))
	{
		printf("zlogInit() failed . \n");
		return;
	}
	ERROR_LOG("%s", "hello world");
}

int main()
{
	test();
	return 0;
}






