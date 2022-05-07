#include<stdio.h>
#include"E:\FileThuong\HOCTAP\UNIVERCITY\Ki1Nam4\KHOAHOCC-C++\Buoi2_C_NangCao_Makefile\BaiTapVeNha\Head\Mstring.h"
#include <assert.h>
//SoSanh
int SS(int Arr1[], int size1, int Arr2[], int size2)
{
     int flag = 1;

    /*Kiểm tra đối số truyền vào mảng có thỏa mãn điều kiện chạy hàm không*/
    assert(Arr1 != NULL);
    assert(Arr2 != NULL);
    assert(size1 != 0);
    assert(size2 != 0);

    /*Nếu số phần tử của 2 mảng khác nhau, thì chúng sẽ khác nhau*/
    if (size1 != size2)  return flag = 0;
    

    /*Kiểm tra từng cặp phần tử tương ứng xem có cặp nào khác nhau không*/
    for (int i = 0; i < size1; ++i) {
        if (Arr1[i] != Arr2[i])  
            return flag = 0; 
        
    }
    return flag;
}
//ChenVD
void chen(int arr[],int n,int phantu, int vitri){
    for (int i = n; i >= vitri; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[vitri] = phantu;
	n++;
}