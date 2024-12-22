// Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information
#include <stdio.h>
struct book{
    char title[100];
    char author[20];
    int price;
};
int main() {
    struct book b1,b2,b3;
    printf("Enter title of 3 books:");
    scanf("%s\n %s\n %s",&b1.title,&b2.title,&b3.title);
    printf("Enter author of 3 books:");
    scanf("%s\n %s\n %s",&b1.author,&b2.author,&b3.author);
    printf("Enter price of 3 books:");
    scanf("%d\n %d\n %d",&b1.price,&b2.price,&b3.price);
    struct book expensive;
    if(b1.price >= b2.price && b1.price >= b3.price){
        expensive=b1;
    }
    else if(b2.price >= b1.price && b2.price >= b3.price){
        expensive=b2;
    }
    else{
        expensive=b3;
    }
    struct book cheap;
    if(b1.price <= b2.price && b1.price <= b3.price){
        cheap=b1;
    }
    else if(b2.price <= b1.price && b2.price <= b3.price){
        cheap=b2;
    }
    else{
        cheap=b3;
    }
    printf("Title of expensive book:%s\n",expensive.title);
    printf("Author of expensive book:%s\n",expensive.author);
    printf("price of expensive book:%d\n",expensive.price);
    printf("Title of cheap book:%s\n",cheap.title);
    printf("Author of cheap book:%s\n",cheap.author);
    printf("price of cheap book:%d\n",cheap.price);
    return 0;
}
