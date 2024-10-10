#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int count = 0;

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya); 
        
        
        int sure_count = petya + vasya + tonya;
        
        
        if (sure_count >= 2) {
            count++;
        }
    }

    printf("%d\n", count); 
    return 0;
}
