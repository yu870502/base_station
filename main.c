#include <stdlib.h>
#include <stdio.h>

#define BS_APP_VER "0.1"
#define BS_CONFIG_PATH "/tmp/bs_config"
#define BS_APP_UPGRADE_PATH "/tmp/ba_app"

#define PRINTF_ENV_LOG() (printf("[file:%s][fun:%s][line:%d]\n", __FILE__, __FUNCTION__, __LINE__))

typedef enum
{
	TAG_TYPE_CARD,
	TAG_TYPE_MAX
}enum_tag_type;

typedef struct
{
	enum_tag_type tag_type;
	unsigned int tag_number;
	int rssi;
	float voltage;
	char *version;
}tag_info;



int extract_config(FILE *config)
{
	
	return 0;
}

int main(int argc, char *argv[])
{
	printf("BS app start [version %s][build date %s][build time %s]\n, ", BS_APP_VER, __DATE__, __TIME__);		
	
	//创建信号，如收到结束信号，调试命令信号（调试使用信号还是消息再议）
	
	//解析命令行参数
	
	//初始化bsp参数
	
	//初始化业务参数
	FILE *config = fopen(BS_CONFIG_PATH, "w+");
	int ret = 0;
	if(ret = extract_config(config) != 0)
	{
		printf("extract_config failed, ret:%d\n", ret);
		PRINTF_ENV_LOG();
		exit(-1);
	}
		
	//专门接收数据模块
	
	//解析数据模块，解析到upgrad命令后，开启接收线程。
	
	
		
}