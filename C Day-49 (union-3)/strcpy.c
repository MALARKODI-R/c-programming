// string cpoy in union
#include <stdio.h>
#include <string.h>
union data{
    int i;
    float f;
    char str[20];
};
int main() {
    union data d;
    d.i=2;
    d.f=3.4;
    strcpy(d.str,"c programming");
    printf("%d\n",d.i);
    printf("%f\n",d.f);
    printf("%s",d.str);
}
