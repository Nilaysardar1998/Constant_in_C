//constants in C-language using const keyword and #define pre-processors.

#include <stdio.h>

//declaring constants using pre-processors
#define length 50
#define width 100

int main(){
    //declaring constants using const keyword
    const int a = 10;

    int b = 12, c;
    c = a + b;
    printf("constant a = (%d) + %d = %d\n", a, b, c);
    int result;
    result = length * width;
    printf("Area of rectangle %d * %d = %d", length, width ,result);
    return 0;
}
