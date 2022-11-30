/*利用指针能直接操作内存的特点来编程输出字符串中每个字符在内存中的存储编码（字符串中可以包含英文数字和汉字）。
程序的运行示例1如下：
请输入一个字符串，长度小于等于100：abcABC012中国人
该字符串的内存编码为： 61 62 63 41 42 43 30 31 32 d6 d0 b9 fa c8 cb 
程序的运行示例2如下：
请输入一个字符串，长度小于等于100：12345上山打老虎
该字符串的内存编码为： 31 32 33 34 35 c9 cf c9 bd b4 f2 c0 cf bb a2
提示：
输出格式用"%x "*/
#include<stdio.h>
#include<string>
int main(int argc, int* argv[])
{
	printf("请输入一个字符串，长度小于等于100：");
	char s[101] = { '\0' };
	scanf("%s", s);
	char* p1, * p2;
	printf("该字符串的内存编码为：");
	p1 = (char*)(s + strlen(s));
	p2 = (char*)s;
	while (p1 > p2)
	{
		printf("%x ", (unsigned char)*p2 & 0xff);
		p2++;
	}
}