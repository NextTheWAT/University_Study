#include <stdio.h>
 
void array_rotate(){
    char A[2][2], B[2][2];
 
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			arr[i][j] = i+j+1;
			arr[1][j] = arr[1][j]+1;
		}
	}
 
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%c ",A[i][j]);
        }
        printf("\n");
    }
 
    printf("==================\n");
 
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            B[j][1-i]=A[i][j];
        }
    }
 
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%c ",B[i][j]);
        }
        printf("\n");
    }
}
 
int main(void){
    array_rotate();
    return 0;
}
