#include<stdio.h>
int func(int a, int b, int c, int n)
{
    int ara[n];
    ara[0]= a, ara[1]= b, ara[2]= c;
    for(int i=3; i<n; i++)
    {
       ara[i] = ara[i-1]+ ara[i-2]+ ara[i-3];
    }
    return ara[n-1];
}

int main()
{
    int n, a, b, c;
    scanf("%d%d%d%d", &n, &a, &b, &c);
    int result= func(a,b,c,n);
    printf("%d", result);
    return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n, a, b, c, d, s,sum1, sum2, sum3, sum4, sum5,sum6, sum7, sum8, sum9, sum10, sum11, sum12, sum13, sum14, sum15, sum16, sum17, sum18, sum19, sum20;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d=b-a;
    s=n-1;
    sum1= a+b+c;
    sum2= sum1+ b+c;
    sum3= sum2+ sum1+ c;
    sum4= sum3+ sum2+ sum1;
    sum5= sum4+ sum3+ sum2;
    sum6= sum5+ sum4+ sum3;
    sum7= sum6+ sum5+ sum4;
    sum8= sum7+ sum6+ sum5;
    sum9= sum8+ sum7+ sum6;
    sum10= sum9+ sum8+ sum7;
    sum11= sum10+ sum9+ sum8;
    sum12= sum11+ sum10+ sum9;
    sum13= sum12+ sum11+ sum10;
    sum14= sum13+ sum12+ sum11;
    sum15= sum14+ sum13+ sum12;
    sum16= sum15+ sum14+ sum13;
    sum17= sum16+ sum15+ sum14;
    sum18= sum17+ sum16+ sum15;
    sum19= sum18+ sum17+ sum16;
    sum20= sum19+ sum18+ sum17;

    if( n==4) {
            printf("%d", sum1);}
    else if( n==5) {
            printf("%d", sum2);}
     else if( n==6) {
            printf("%d", sum3);}
     else if( n==7) {
            printf("%d", sum4);}
     else if( n==8) {
            printf("%d", sum5);}
    else if( n==9) {
            printf("%d", sum6);}
    else if( n==10) {
            printf("%d", sum7);}
    else if( n==11) {
            printf("%d", sum8);}
    else if( n==12) {
            printf("%d", sum9);}
    else if( n==13) {
            printf("%d", sum10);}
    else if( n==14) {
            printf("%d", sum11);}
    else if( n==15) {
            printf("%d", sum12);}
    else if( n==16) {
            printf("%d", sum13);}
    else if( n==17) {
            printf("%d", sum14);}
    else if( n==18) {
            printf("%d", sum15);}
    else if( n==19) {
            printf("%d", sum16);}
    else if( n==20) {
            printf("%d", sum17);}
    else if( n==21) {
            printf("%d", sum18);}
    else if( n==22) {
            printf("%d", sum19);}
    else if( n==23) {
            printf("%d", sum20);}

    return 0;
}

*/

