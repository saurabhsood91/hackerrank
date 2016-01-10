#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int hourglass_sum(int arr[][6], int i, int j) {
    int sum = 0;
    int x;
    for(x = j; x <= j + 2; x++) {
        sum += arr[i][x] + arr[i + 2][x];
    }
    sum += arr[i + 1][j + 1];
    return sum;
}

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }

    int i = 0, j = 0;
    int max_sum = -99999;
    int sum;
    for(i = 0; i + 2 <= 5; i++) {
        for(j = 0; j + 2 <= 5; j++) {
          sum = hourglass_sum(arr, i, j);
          if(sum > max_sum) {
              max_sum = sum;
          }
        }
    }
    printf("%d", max_sum);
    return 0;
}
