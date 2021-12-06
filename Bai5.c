#include<stdio.h>

typedef struct{
    char name[40];
    char address[255];
    float chi_so_cu;
    float chi_so_moi;
    float tongtien;
}HD;

int main(){
    HD hd[200];

    int n; printf("Nhap so luong hoa don dien: "); 
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        
        printf("Nhap ten khach hang: \n");
        fflush(stdin);
        gets(hd[i].name);

        printf("Nhap dia chi khach hang: \n");
        fflush(stdin);
        gets(hd[i].address);
        
        
        do{
            printf("Nhap chi so cong to cu: "); scanf("%f",&hd[i].chi_so_cu);

            printf("Nhap chi so cong to moi: "); scanf("%f",&hd[i].chi_so_moi);
        
        }while(hd[i].chi_so_moi - hd[i].chi_so_cu<0);

        float s = hd[i].chi_so_moi - hd[i].chi_so_cu;

        if(s>=1 && s<=50)
            hd[i].tongtien = s*1000;
        else if(s>=51 && s<=70)
            hd[i].tongtien = (1000*50)+ (s-51)*1200;
        else if(s>=71 && s<=100)
            hd[i].tongtien = (1000*50)+(20*1200)+(s-71)*1500;
        else{
            hd[i].tongtien = (1000*50)+(20*1200)+(30*1500)+(s-100)*1700;
        }


    }

    for(int i=1; i<=n; i++){
        printf("Ten Khach Hang: %4s\n", hd[i].name);
        printf("Dia chi: %s\n", hd[i].address);
        printf("Chi so cong tu cu: %0.2f\n", hd[i].chi_so_cu);
        printf("Chi so cong to moi: %0.2f\n", hd[i].chi_so_moi);
        printf("Tong tien cuoc dien thoai: %0.2f\n",hd[i].tongtien);
    }




}