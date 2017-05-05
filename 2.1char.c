#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	setlocale(LC_ALL,"zh-CN.UTF-8");
	wchar_t a1[10] = L"你好";
	
	wchar_t c = L'A';
	wchar_t a2[] = L"Hello!";
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(a1));

	wprintf(L"this is a test!\n");//打印出错，宽字符在内存中的数据与wprintf打印参数之间有问题.
	wprintf(L"%d\n", wcslen(a2));
	wprintf(L"%s\n", a2);

	return 0;
}



