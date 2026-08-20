#include <stdio.h>

void addmoolah(int* money, int add);
int main() {
    // the torture starts here :)

    int additional;
    
    scanf("%d", &additional); // fun fact - I was debugging this code for 20 minutes and figured the reason my thing was wrong was because I forgot the & in the scanf
    
    int money = 3546;
    int *pMoney = &money; // the night of the phantom asterix
    
    addmoolah(pMoney, additional); 
    printf("%d", money);
    
    return 0;
}

void addmoolah(int* money, int add) { // AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH

    (*money) = (*money) + add; //I knwo there must be an easier way to do this but this works, and im not touching it

}
