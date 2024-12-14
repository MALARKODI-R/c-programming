// Print height of a person
#include <stdio.h>
int main() {
    float height;
    printf("Enter a height of a person:");
    scanf("%f",&height);
    if(height<150.0){
        printf("Dwarf");
    }
    else if((height >=150.0) && (height <=165.0)){
        printf("Average");
    }
    else if((height >165.0) && (height <=195.0)){
        printf("Tall");
    }
    else{
        printf("Abnormal height");
    }
}
