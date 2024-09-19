#include <iostream>
using namespace std;
void PrintRect(int n, int m){
    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("1");
        }
        printf("\n");
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int row, col = 0;
    scanf("%d", &row);
    scanf("%d", & col);

    PrintRect(row, col);
    return 0;
}