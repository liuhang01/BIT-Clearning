/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */
 
#include <stdio.h>
#include <stdlib.h>
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int merge_sort(char *a,char *b,char *c);
int main(int argc, char *argv[]) {
          
    char a[100];
        char b[100];
        char c[200];
  
    gets(a);
        gets(b);
       merge_sort(a,b,c);
    puts(c);
    return 0;
}
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
int merge_sort(char *a,char *b,char *c){
    while (*a!=0&&*b!=0) {
        while(*a>*b&&*b) {
            *c=*b;
            b++;c++;
        }
        while(*a<*b&&*a) {
            *c=*a;
            a++;c++;
        }
        while (*a==*b&&*a&&*b) {
            *c=*a;c++;
            *c=*b;c++;
            a++;b++;
        }
    }
    while (*a) {
        *c=*a;
        a++;c++;
    }
    while (*b) {
        *c=*b;
        b++;c++;
    }
    *c=0;
    return 0;
}
