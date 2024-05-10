#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void print_skill_tree(char three_name[],char link){
	printf("欢迎来到：%c:%c",&three_name,&link);
} 
int main(int argc, char *argv[]) {
	char three_name[]="C语言";
	char link="https://clang.csdn.net";
	printf("欢迎来到：%c:%c",&three_name,&link);
 //void print_skill_tree(char three_name[],char link);  
	return 0;
}
