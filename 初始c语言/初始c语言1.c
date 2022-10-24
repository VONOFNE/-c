#include <stdio.h> //std-standard i-input o-output           printf——打印函数      scanf——输入函数
#include<string.h>
#define MAX 100//#define定义的标识符常量

/*初试函数*/
int Add(int x,int y){
      int z = 0;
      z = x + y;
      return z;
   }


int main () //主函数-程序的入口：有且仅有一个
{
   int num1 = 1;//局部变量
   char _a = 'q';//命名时不可以数字开头
   3.14;//字面常量
   const int num2 = 10;//const修饰的常变量（拥有常属性的变量*）
   int num3 = MAX;
   extern int a;//extern：声明外部符号的
   char arr1[] = "abc";//字符串——一串字符
   char arr2[] = {'a','b','c','\0'};//字符串的结束符——\0
   int input;
   int num4,num5;


   printf("%s\n",arr1);

   printf("%d\n",strlen(arr2));//strlen()——得到字符串的长度

  printf("%d\n",a);

   printf("%c\n",_a);
   
   printf("char所占用的内存空间为%d\n",sizeof(char));//sizeof——显示数据类型所占用的内存空间（单位：byte）1byte=8bit；
   
   printf("%d %d %d\n",num1,num2,num3);

   printf("hello world\n");//print funcation 打印函数


/*选择语句
   printf("你要好好学习吗？（1/0）");
   scanf("%d",&input);//&——取地址
   if(input == 1){
      printf("进大厂\n");
   }
   else{
      printf("回家种地\n");
   }
*/

/*循环语句*/
   int line = 0;
   while(line<4){
      printf("敲代码:%d\n",line);
      line++;
   }
   if(line == 4){
      printf("好offer\n");
   }


/*初始数组*/
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   int i = 0;
   while(i<10){
      printf("%d\n",arr[i]);
      i++;//先使用，后++
   }

/*初试函数*/
   scanf("%d%d", &num4, &num5);
   int sum = Add(num4,num5);
   printf("%d\n",sum);

/*初识标识符*/
   //0表示假，非0表是真
   int b  = 2;
   printf("%d\n",!b);

/*！的用法*/
   if(b){
      //b为真，行动
   }

   if(!b){
      //b为假，行动
   }

/*重新认识sizeof*/
//sizeof是一个操作符
//不是函数
//计算类型和变量的大小的
//计算数组大小
   int arr3[10] = { 0 };
   printf("%d\n",sizeof(arr3));
   printf("%d\n",sizeof(arr3[0]));
   int sz =  sizeof(arr3) / sizeof(arr3[0]);
   printf("%d\n",sz);

/*移位操作符*/
   int c = b << 1;//二进制位数向左移动1
   printf("%d\n",c);

/*按位取反*/
   int d = 0;
   printf("%d\n",~d);//~对一个数的二进制按位取反

/*++前后*/
   int e = ++d;//先++，后使用

   printf("%d\n",e);
   printf("%d\n",d);

   return 0;//停止命令
}