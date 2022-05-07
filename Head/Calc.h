#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED
#define SIZE_OF_ARRAY(arr) (sizeof(arr)/sizeof(arr[0]))


//Nhập mảng
void InputArray(int arr[],int n);
//In Mảng
void OutputArray(int arr[],int n);
//Sum
int Sumarray(int arr[],int n);
//Max
int Maxarray(int arr[],int n);
//Min
int Minarray(int arr[],int n);
//  Position
int Position(int arr[],int size, int vtx);

#endif