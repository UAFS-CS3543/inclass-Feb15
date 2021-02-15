#include <stdio.h>

int main(){
   int val1=50;
   double fval1=33.576;
   double fval2;
   int val2;

   //Convert a Int to a Float
   fval2 = val1;
   //Convert a Float to a Int
   val2=(int) fval1;

   printf("val1:  %8d\n",val1);
   printf("fval1: %8.3f\n",fval1);
   printf("fval2: %8.3f\n",fval2);
   printf("val2:  %8d\n",val2);


  return 0;
}
