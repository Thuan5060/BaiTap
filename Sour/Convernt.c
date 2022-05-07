#include "E:\FileThuong\HOCTAP\UNIVERCITY\Ki1Nam4\KHOAHOCC-C++\Buoi2_C_NangCao_Makefile\BaiTapVeNha\Head\Convernt.h"
#include<stdio.h>
#include <math.h>
void InputInt(int nconvert)
{    
    printf("Input N:");
    scanf("%d",&nconvert);
}
int Convernt10to2(int n){
    int bin=0;
    int rem,i=1;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        bin+=rem*i;
        i*=10;
    }
    
    return bin;
}
int Convernt10to16(int nconvert)
{   
    //Sai
    int rmd,q,dn=0,m,l;
	int i=1,j,tmp;
    char s;
    q=nconvert;
    for(l=q;l>0;l=l/16)
    {
		tmp = l % 16;
		if( tmp < 10)
        {
		    tmp =tmp + 48;
        }
        else
        {
            tmp = tmp + 55;
            dn=dn*100+tmp;
        }
	}
    for(m=dn;m>0;m=m/100)
    {
        s=m % 100;
        printf("%c",s);
    }

}