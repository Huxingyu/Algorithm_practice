#include <stdio.h>

int main(){
    char str[15];
    for(int i=0;i<3;i++){
        str[i]=getchar();
    }
    // for(int i=0;i<3;i++){
    //     putchar(str[i]);
    // }
    str[3]='\0';
    puts(str);
    printf("%s",str);
    return 0;
}

//使用getchar输入而使用puts或者printf输出时，记得在最后加上\0作为结束
//puts与printf对于字符数组以\0判断结尾
//scanf("%s")与gets不用考虑这个