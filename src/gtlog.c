
#include <stdarg.h>

#include "gtlog.h"

zlog_category_t *zc;


/********************************************************
zlog
*********************************************************/

/********************************************************
   Func Name: init
Date Created: 2018-7-20
 Description: ³õÊ¼»¯
       Input: 
      Output: 
      Return: error code
     Caution: 
*********************************************************/
int zlogInit(const char *pcConfigPath, const char *pcModelName)
{
	int iRet = 0;
	
	if (NULL == pcConfigPath || NULL == pcModelName)
	{
		iRet = -1;
		return iRet;
	}

	iRet = zlog_init(pcConfigPath);
	if (iRet) {
		printf("init fail and path is %s \n",pcConfigPath);
		return -1;
	}
	zc = zlog_get_category(pcModelName);
	if (!zc) {
		printf("zlog_get_category fail\n");
		zlog_fini();
		return -1;
	}

	return 0;
}

/********************************************************
   Func Name: init
Date Created: 2018-7-20
 Description: Ïú»Ùzlog
       Input: 
      Output: 
      Return: 
     Caution: 
*********************************************************/
void zlogDestory()
{
	zlog_fini();
}











