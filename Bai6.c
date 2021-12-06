#include<stdio.h>

typedef unsigned int ui;

typedef struct{
    char name[40];
    ui tuoi;
    ui dtb;

}SV;

int main(){
    SV sv[50];
    int n;
    
    do{
        printf("Nhap vao so luong sinh vien: "); scanf("%d",&n);
    }while(n<=0);

    for(int i=1; i<=n; i++){
        printf("Nhap ten sinh vien: ");
        fflush(stdin); //xóa bộ nhớ đệm
        
        gets(sv[i].name);

        printf("Nhap tuoi: "); scanf("%d",&sv[i].tuoi);

        printf("Nhap diem trung binh: "); scanf("%d", &sv[i].dtb);
       
    }


    
}