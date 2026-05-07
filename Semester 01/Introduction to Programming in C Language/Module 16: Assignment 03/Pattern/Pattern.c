#include <stdio.h>

void print_row(int size, char symbol, int max_width) {
    int spaces = (max_width - size) / 2;

    for (int i = 0; i < spaces; i++){
        putchar(' ');
    }
    
    for (int i = 0; i < size; i++){
        putchar(symbol);
        
    }

    printf("\n");
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int max_width = 2 * N - 1;
    
    for (int i = 1; i <= N; i++) {
        
        char symbol = (i % 2);
        
        if(symbol != 0){
            symbol = '#';
        }
        
        else{
            symbol = '-';
        }
        
        int size = 2 * i - 1;
        print_row(size, symbol, max_width);
    }

    for (int i = N - 1; i >= 1; i--) {
        char symbol = (i % 2);
        
        if(symbol != 0){
           symbol = '#';
        }
        
        else{
            symbol = '-';
        }
        
        int size = 2 * i - 1;
        print_row(size, symbol, max_width);
    }

    return 0;
}
