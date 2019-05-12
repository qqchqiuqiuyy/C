#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * fp = fopen("test1.dat", "wb");
	if (!fp)
	{
		printf("文件打开失败!\n");
		exit(1);
	}
	char str[13] = "Hello World!";
	fwrite(str, sizeof (char), 13, fp);
	fclose(fp);
	
	fopen("test1.dat", "rb"); 
	if (!fp)
	{
		printf("文件打开失败!\n");
		exit(1);
	}
	char res[13];
	fread(res, sizeof (char), 13, fp);
	printf("%s\n", res);
	fclose(fp);
	return 0;
}

/*
	注意：二进制文件的后缀是.dat 
	
	fwrite()函数的原型如下：
	size_t fwrite(const void * _Str,size_t _Size,size_t _Count,FILE * _File); 
	第一个参数是要写入的原始数据，可以是任意类型的指针
	第二个参数是该类型的大小 
	第三个参数是元素的格式
	第四个参数是文件指针
	
	返回成功写入的项目数
	
	示例：
	int nums[4] = {1,2,3,4};
	char str[13] = "Hello World!"; 
	fwrite(nums, sizeof (int), 4, fp);	//向文件指向的当前位置写入4个整数 
	fwrite(str, sizeof (char), 13, fp);	//向文件指向的当前位置写入13个字符（此处包含末尾的\0）
	fwrite(&nums[0], sizeof (int), 1, fp);	//向文件指向的当前位置写入整数nums[0]
	
	fread()函数的原型如下： 
	size_t fread(void * _DstBuf,size_t _ElementSize,size_t _Count,FILE * _File);
	第一个参数是要用于读入的数组，可以是任意类型
	第二个参数是该类型的大小 
	第三个参数是元素的格式
	第四个参数是文件指针
	
	返回成功读入的项目数
	
	不做示例  
*/
