#include<stdio.h>
#include<conio.h>
int func(int num){
   if (num==0 || num==1)
   {
     return 1;
   }
   else{
       return num*func(num-1);
   }
   
    
}
int main(){

    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    int fractorial=func(num);
    printf("the fracrorial of %d is %d",n,fractorial);


 return 0;


}