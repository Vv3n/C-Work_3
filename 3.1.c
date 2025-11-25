#include <stdio.h>

struct Product {
    char name[50];
    int productId;
    float price;
};

int main(){

    struct Product item;

    printf("Enter Your Product Id, Price, And Name\n");

    if(scanf("%d %f %s", &item.productId, &item.price, item.name) != 3){
        return 1;
    }

    printf("ID: %d, Price: %.2f, Name: %s", item.productId, item.price, item.name);

    return 0;
}