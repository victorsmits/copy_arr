#include <stdio.h>
#include <stdlib.h>

int* copy_arr(int *arr, int N);
void print_arr ( int *arr, int N);

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *b = copy_arr (a, 3);
    print_arr (a, 3);
    print_arr (b, 3);
    a [0] = 0;
    print_arr (b, 3);

    return 0;
}

void print_arr ( int *arr, int N) {
    if (N == 0) // Cas de base , tableau vide
        printf ("[]");
    else {
        printf("[%d", arr[0]); // Affichage 1er élément
    }
    int i;
    for (i = 1; i<N; i ++){
        printf (", %d", arr[i]); // Si plusieurs éléments
    }
    printf ("]\n");
}

int* new_tab ( int size )
{
    return calloc (size , sizeof ( int ));
}

int* copy_arr(int *arr, int N){
    int* NewArr = new_tab(N);
    int i;
    for(i = 0; i<N;i++){
        NewArr[i]=arr[i];
    }
    return NewArr;
}
