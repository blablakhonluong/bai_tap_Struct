#include<stdio.h>



typedef struct{
    char name[40];
    int mahang;
    float don_gia;
    unsigned int soluong;
}DH;

int main(){



    DH dhang[200];

    int n; int b[10000]={0}; //cho tất cả phần tử của mảng bằng 0
    
    do{
        printf("Nhap vao so luong don hang: "); scanf("%d",&n);
    }while(n<=0);


    for(int i=1; i<=n; i++){
        fflush(stdin); //xóa bộ nhớ đệm
        printf("Nhap ten khach hang: "); gets(dhang[i].name);
        fflush(stdin); //xóa bộ nhớ đệm

        printf("Nhap ma hang: ");scanf("%d",&dhang[i].mahang);

        printf("Nhap don gia: "); scanf("%f",&dhang[i].don_gia);
        
        printf("Nhap so luong: "); scanf("%d", &dhang[i].soluong);

        b[dhang[i].soluong]++; //1ms - O(n) , O(nlog(n))  

    }

    printf("Thong ke cac phieu hang co cung so luong: \n");

     for(int i=1; i<=n; i++){
            if(b[dhang[i].soluong]>1){
                printf("Phieu so: %d\n",i);
                printf("Ten khach hang: %4s\n", dhang[i].name);
                printf("Ma hang la: %d\n", dhang[i].mahang);
                printf("So luong la: %d\n", dhang[i].soluong);          
            }
         }

     }


    

    

    




