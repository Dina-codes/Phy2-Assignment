  Problem 1

#include<stdio.h>
#include<math.h>
int main(){
int m,i,max_index = 0;
float wl,a[3],theta[3];
printf("enter the wl(in nm) : ");
scanf("%f",&wl);
if(wl<380||wl>750){
    printf ("out of range, enter valid wl\n ");
}
else{
printf("\n enter the order : ");
scanf("%d",&m);
for(i=0;i<3;i++){
    printf("\n enter the width a%d(in mm): ",i+1);
    scanf("%f",&a[i]);
    float a_nm = a[i]*1e6;
    theta[i]= asin((m*wl)/a_nm)*( 180.0/3.1416);
    printf("\n theta for slit a%d = %.2f degrees\n",i+1,theta[i]);
}
for(i=0;i<3;i++){
    if ( theta[i]> theta [max_index] ){
        max_index =i;
    }
}
printf ("\n slit a%d bent the light most.\n",max_index+1);
}
}



 Problem 2


#include<stdio.h>
#include<math.h>
int main(){

int m=3;
float d,lmda=530e-9,theta1_deg=65.0;
float theta1_rad = theta1_deg *(3.1416/180.0);

 d =(m*lmda)/sin(theta1_rad);
 printf("the value of d = %e\n",d);

 int m2=2;
 float lmda2=700e-9,theta2_deg;
 theta2_deg = asin((m2*lmda2)/d)*(180.0/3.1416);
 printf("the value of theta :%f ",theta2_deg);

}



