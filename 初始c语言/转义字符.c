#include <stdio.h>
#include <string.h>
int main (){
    printf("%c\n", '\101');//\ddd——ddd表示三位八进制的数字——转义为ASCII码
    printf("%c\n",'\x30');//\xdd——dd表示两位十六进制的数——转义为ASCII码
    printf("%s\n","c:\\test")// 双\表示忽略转义字符

    return 0;
}