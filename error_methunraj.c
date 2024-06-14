#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="hello world";
   // char str2[]="hello world";
    // char str3[]="hi";
    char str2[20];
    strcpy(str1,str2);
    // printf("%d\n",strcmp(str1,str2));
   // strcpy(str2,str1);
   //printf("%d\n",strcmp(str1,str3));
   printf("%s",str2);
    return 0;

}