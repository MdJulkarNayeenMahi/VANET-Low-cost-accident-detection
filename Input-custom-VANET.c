#include <stdio.h>
int main(){
   char number[500];
   int val,i,n,k;
   printf("Number of vehicles that is affected by accident on VANET: ");
   scanf("%d",&n);
   printf("Number of normal running vehicles on VANET: ");
   scanf("%d",&k);
   FILE *fptr;
   fptr=(fopen("C:\\vehicle.txt","a"));
   if(fptr==NULL){
       printf("Error!");
       exit(1);
   }
   for(i=0;i<n;++i)
   {
      printf("vehicle%d\nnumber: ",i+1);
      scanf("%s",number);
      printf("showing value: ");
      scanf("%d",&val);
      fprintf(fptr,"\nNumber: %s \nValue=%d \n",number,val);
   }
   for(i=0;i<k;++i)
   {
      printf("vehicle%d\n number: ",i+1);
      scanf("%s",number);
      printf("showing value: ");
      scanf("%d",&val);
      fprintf(fptr,"\nNumber: %s \nValue=%d \n",number,val);
   }
   fclose(fptr);
   return 0;
}
