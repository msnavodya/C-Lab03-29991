#include<stdio.h>
int main ()
{
  /*int  n1,n2,ans;
  printf("Enter the number");
  scanf("%d %d",&n1,&n2);

  if(n1>n2)
  printf("%d is n1 highest number\n");
  else
  printf("%d is n2 highest number\n");*/






int n1,n2,n3,max;
printf ("Enter the number");
scanf("%d %d %d",&n1,&n2,&n3);

if (n1>n2)
 {

 if (n1>n3)
    max=n1;
    else
    max=n3;
 }
else if (n2>n3)
max=n2;
else
max=n3;
printf("the largest value is %d ",max);







/*char ename[10];
float bs,inc,ns;
printf ("Enter the employee name:\n");
scanf ("%s",&ename);
printf("Enter the basic sallery:\n");
scanf("%f",&bs);

if (5000>bs){
    inc=bs*5/100;
}
else if( bs<10000){
    inc=bs*15/100;
}
else{
    inc=bs*15/100;
}
printf("hi %s your new salary is %.2f",ename,(bs+inc));




float radi;

printf ("enter the radius of the circle:");
scanf("%f",&radi);

printf("Diameter is %.2f\n",radi*2.0);

printf ("circumference is %.2f\n",radi*2.0*3.14159);

printf ("area is %.2f\n",radi*radi*3.14159);

}*/
