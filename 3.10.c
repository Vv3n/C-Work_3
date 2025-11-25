#include <stdio.h>

struct Item{
    char name[50];
    float unitPrice;
    int quality;
    float itemCost;
};

int main(){
    int N, i;
    float subTotal = 0.0;
    float totalVAT = 0.0;
    float grandTotal = 0.0;
    float VAT_RATE = 0.07;

    if(scanf("%d", &N) != 1){
        return 1;
    }

    struct Item items[N];

    for(i = 0; i < N; i++){
        
        if(scanf("%s %f %d", items[i].name, &items[i].unitPrice, &items[i].quality) !=3){
            return 1;
        }

        items[i].itemCost = items[i].unitPrice * items[i].quality;
        
        subTotal += items[i].itemCost;
    }
    
    totalVAT = subTotal * VAT_RATE;
    grandTotal = subTotal + totalVAT;

    printf("\n--- RECEIPT ---\n");

    for(i = 0; i < N; i++){
        printf("\n%s x %d = %.2f\n", items[i].name, items[i].quality, items[i].itemCost);
    }

    printf("\n-------------\n");

    printf("\nSubtotal : %.2f\n", subTotal);

    printf("\nVAT (7%%) : %.2f\n", totalVAT);

    printf("\nGrand Total : %.2f\n", grandTotal);

    return 0;
}
