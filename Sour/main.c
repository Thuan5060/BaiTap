
#include "E:\FileThuong\HOCTAP\UNIVERCITY\Ki1Nam4\KHOAHOCC-C++\Buoi2_C_NangCao_Makefile\BaiTapVeNha\Head\Calc.h"
#include "E:\FileThuong\HOCTAP\UNIVERCITY\Ki1Nam4\KHOAHOCC-C++\Buoi2_C_NangCao_Makefile\BaiTapVeNha\Sour\Convernt.c"
#include "E:\FileThuong\HOCTAP\UNIVERCITY\Ki1Nam4\KHOAHOCC-C++\Buoi2_C_NangCao_Makefile\BaiTapVeNha\Sour\Mstring.c"
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int n,nconvert,SearchNumber,vitri,i;
    int Array[100];
    int Array1[20]={1,2,3,4};
    int Array2[20]={10,15,20};
    //để lấy độ dài (số phần tử) của mảng chỉ định
    int dodai = sizeof(Array)/sizeof(Array[0]);
    //Câu 1:
    //----------------------------------------
    printf("So phan tu cua mang: ");
    scanf("%d",&n);
    //----------------------------------------
    printf("Phan tu cua mang:\n");
    InputArray(Array,n);
    //----------------------------------------
    printf("Mang hien thi:\n");
    OutputArray(Array,n);
    //----------------------------------------
    printf("Tong cua mang la: %d\n",Sumarray(Array,n-1));
    printf("MAX: %d\t",Maxarray(Array,n));
    printf("MIN: %d\t",Minarray(Array,n));
    //Nhập số muốn tìm số n(Bug: Đôi khi hiển thị thêm vài số ở đằng sau số cần tìm)
    printf("\nSearchNumber:");
    scanf("%d",&SearchNumber);
    Position(Array,SIZE_OF_ARRAY(Array),SearchNumber);
    //----------------------------------------
    //Câu 2:
    //----------------------------------------
    printf("\nInput N:");
    scanf("%d",&nconvert);
    // //----------------------------------------
    printf("Convernt 10 to 2:0b%d",Convernt10to2(nconvert));
    printf("\n");
    //----------------------------------------
    //printf("Convernt 10 to 16:0x%d",Convernt10to16(nconvert));//Câu này em bị lỗi
    //Câu3:
    //----------------------------------------
    //So Sánh số phần tử của 2 Arr1 và Arr2,Arr2 và Arr3
    printf("Array1 and Array1: %d\n",SS(Array1,SIZE_OF_ARRAY(Array1),Array1,SIZE_OF_ARRAY(Array1)));
    printf("Array1 and Array2: %d\n",SS(Array1,SIZE_OF_ARRAY(Array1),Array2,SIZE_OF_ARRAY(Array2)));
    //Chèn mảng vào 1 mảng
    //Nhập vị trí
    printf("Vi Tri");
    scanf("%d",&vitri);
    for (int i = 0; i < n; i++)
	{
		if (Array1[i] == 3)
		{
			int dem = 0;
			int Array2[20]={10,15,20};
			int j = 0;
			while (dem < 3)
			{
				chen(Array1, n, Array2[dem], i+1);
				dem++;
				i++;
			}
		}
	}
    printf("XuatMang");
	OutputArray(Array1,n);
    return 0;
}
