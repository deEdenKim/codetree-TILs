#include <stdio.h>
void PrintNLines(int n){
    for(int i = 0; i<n; i++){
        //for(int j =0; j<5; j++) printf("*");
        printf("12345^&*()_\n");
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int row_num = 0;
    scanf("%d",&row_num);

    PrintNLines(row_num);
    return 0;
}