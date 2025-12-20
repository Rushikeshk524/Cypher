#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t dividend, divisor;
    int n;
    printf("Enter number of bits (n): ");
    scanf("%d", &n);
    
    printf("Enter dividend: ");
    scanf("%u", &dividend);

    printf("Enter divisor: ");
    scanf("%u", &divisor);

    uint32_t A = 0;       
    uint32_t Q = dividend; 
    uint32_t M = divisor;  
    int i =0;
start: 
    if (i >= n) goto end;  

    A = (A << 1) | ((Q >> (n - 1)) & 1);
    Q = Q << 1;

    int32_t temp = (int32_t)A - (int32_t)M;
    if (temp >= 0) {
        A = (uint32_t)temp;
        Q = Q | 1;
    } else {
      
        A = (uint32_t)(temp + M);
      
    }

    i++;
    goto start;  

end:

    // Print final result
    printf("\nQuotient (Q)  = ");
     for (int i = n - 1; i >= 0; i--) {
        printf("%u", (Q >> i) & 1);
    }
    printf("\nRemainder (A) = ");
     for (int i = n - 1; i >= 0; i--) {
        printf("%u", (A >> i) & 1);
    }
    printf("\n");

    return 0;
}
