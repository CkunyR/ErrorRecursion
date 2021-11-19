#include <stdio.h>

int main()
{
	printf("666\n");
	main();//递归-----会出现错误，--栈溢出//Stack overflow
	return 0;
}
