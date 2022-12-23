#include <iostream>
#include <string.h>
 
using namespace std;
 
#define N 10
 
int arr[4][4], temp_arr[4][4];
 
void init(){
    
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            arr[i][j] = i*10 + j;
            
}
 
void print_arr(){
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout.width(2);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
}
 
int main()
{
    init();
    
    print_arr();
    
    // 배열 90도 회전
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            temp_arr[i][j] = arr[N - j -1][i];
    
    // 배열 값 복사
    memmove(arr, temp_arr, sizeof(arr));
    
    print_arr();
}
