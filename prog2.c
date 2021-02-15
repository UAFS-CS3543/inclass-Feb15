#include <stdio.h>

int main(){
   int val=5;

   if(val<5){
      printf("Val: %d\n",val);
   }else{
      printf("Value is greater than 5\n");
   }
   printf("-----While---------------\n");
   while(val<5){
      printf("Val: %d\n",val);
      val = val + 1; 
   }

   printf("-----For---------------\n");
   for(val=5;val<5;val++){
      printf("Val: %d\n",val);
   }


   printf("-----Do While---------------\n");
   val=5;
   do{
      printf("Val: %d\n",val);
      val = val + 1; 
   }while(val<5);

}
