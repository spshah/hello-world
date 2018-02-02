#include<stdio.h>
#include<stdlib.h>

int main(void)
 {
    int day,month,year,ref_year,temp,val,i,leap=0,nor=0;
    printf("\n............Find the day on which you were born............\n");
    printf("\nEnter day:\t");
    scanf("%d",&day);
    printf("\nEnter month:\t");
    scanf("%d",&month);
    printf("\nEnter year:\t");
    scanf("%d",&year);
    ref_year=year-(year%400);
    temp=year-(year%100);
    val=(((temp-ref_year)*5)/100)%7;
    for(i=temp+1;i<year;i++)
      { 
        if(( (i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
           leap++;
        else
           nor++;
      }
    val+=(((leap*2)+nor)%7);
    temp=0;
    for(i=1;i<month;i++)
      {
	if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12 )
	    temp+=3;
	else if(i==4 || i==6 || i==9 || i==11)
	   temp+=2;
	else if (( (year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
            if (i==2)
               temp+=1;
      }
    val+=((temp+day)%7);
    if(val>6)
      val=val%7;
    if(val==1)
      printf("\nYou were born on 'MONDAY'\n");
    if(val==2)
      printf("\nYou were born on 'TUESDAY'\n");
    if(val==3)
      printf("\nYou were born on 'WEDNESDAY'\n");
    if(val==4)
      printf("\nYou were born on 'THRUSDAY'\n");
    if(val==5)
      printf("\nYou were born on 'FRIDAY'\n");
    if(val==6)
      printf("\nYou were born on 'SATURDAY'\n");
    if(val==0)
      printf("\nYou were born on 'SUNDAY'\n");
}
    
