//strlen,strcmp,strcpy,strcat

#include <stdio.h>
#include <string.h>

typedef long long ll;

int main(){
    char str1[10],str2[10];
    gets(str1);
    gets(str2);
    strcat(str1, str2);
    puts(str1);
    return 0;
}

/*int main(){
    char str1[10],str2[10];
    gets(str1);
    gets(str2);
    strcpy(str1,str2);
    puts(str1);
    return 0;
}*/

/*int main(){
    char str1[10],str2[10];
    gets(str1);
    gets(str2);
    ll n=strcmp(str1,str2);
    printf("%lld",n);
    return 0;
}*/

/*int main(){
    char str[10];
    gets(str);
    int n=strlen(str);
    printf("%d",n);
    return 0;
}*/

//putchar(数字)输出的是ASCII码
//long long是分开的