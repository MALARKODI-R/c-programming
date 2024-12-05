// Decimal to binary of an float
#include <stdio.h>
int main() {
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);
    int int_part=(int)a;
    float frac_part=a-int_part;
    int binary_int[32];
    int binary_frac[32];
    int i=0;
    if(int_part==0){
        printf("0");
    }
    while(int_part>0){
        binary_int[i]=int_part%2;
        int_part=int_part/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary_int[j]);
    }
    printf(".");
    int j=0;
    while(frac_part>0 && j<32){
        frac_part=frac_part*2;
        binary_frac[j]=(int)frac_part;
        frac_part=frac_part-binary_frac[j];
        j++;
    }
    for(int k=0;k<j;k++){
        printf("%d",binary_frac[k]);
    }
}
