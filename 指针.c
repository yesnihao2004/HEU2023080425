#include<stdio.h>

int main(){
	int* pc=NULL;
	char* pa=NULL;
	printf("%u\n%u",sizeof(pc),sizeof(pa));
	//64位环境下指针是8个字节，32位环境是下指针是4个字节 
	int a= 0x11223344;//0x表示是16进制 
	//16进制中1个16进制数表示4个二进制数 
	//16进制；0，1，2，3，4，5，6，7，8，9，a,b,c,d,e,f 
    //结论
	//指针类型决定了指针在被解引用的时候访问几个字节
	//如果是int*的指针，解被访问4个字节
	// 如果是char*的指针，解被访问1个字节
	return 0;
}
