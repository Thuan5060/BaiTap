#include "E:\FileThuong\HOCTAP\UNIVERCITY\Ki1Nam4\KHOAHOCC-C++\Buoi2_C_NangCao_Makefile\BaiTapVeNha\Head\Calc.h"
#include <stdio.h>
//----------------------------------------
//InputArray
void InputArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("M[%d]:",i);
        scanf("%d",&arr[i]);
    }
}
//----------------------------------------
//OutputArray
void OutputArray(int arr[],int n)
{
    //Hiển thị mảng
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
}
//----------------------------------------
//Sum
int Sumarray(int arr[],int n)
{   
    int res;
    if (n == 0)
        return arr[0];
    else
    return arr[n] + Sumarray(arr,n-1);
}
//-----------------------------------
//Max
int Maxarray(int arr[],int n)
{
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
//-----------------------------------
//Min
int Minarray(int arr[],int n)
{
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(min > arr[i])
        {
            min=arr[i];
        }
    }
    return min;

}
//-----------------------------------
//position
int Position(int arr[],int size, int vtx){
    //Tạo một mảng mới
    int result[100];
    int cout=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==vtx)
        {
            result[cout]=i;
            cout++;
        }
    }
    printf("\nPhan tu: %d xuat hien tai vi tri:",vtx);
    OutputArray(result,cout);
}