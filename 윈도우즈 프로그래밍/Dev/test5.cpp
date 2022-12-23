#include <iostream>

using namespace std; 

int main(void)
{
   int arr[2][2]={ {1,2},{3,4} };
   int i,j;
   
   
   //1234 3142 4321
   
   for(i=0; i<2; i++){
      for(j=0; j<2; j++){
         cout<<arr[i][j];
      }
      cout<<"\n";
    } 
   cout<<"\n";
   
   for(i=0; i<2; i++){
      for(j=1; j>=0; j--)
      {
         cout<<arr[j][i];
      }
      cout<<"\n";
   }
   
   cout<<"\n";
   
   	for(int a=0; a<2; a++){
      for(i=1; i>=0; i--){
      	for(j=1; j>=0; j--){
         cout<<arr[j][i] << " ";
      }
   }
}
}
