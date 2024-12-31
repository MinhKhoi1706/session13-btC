#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 158, num2 = 152;

   
    int result = ucln(num1, num2);

    
    printf("uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}

