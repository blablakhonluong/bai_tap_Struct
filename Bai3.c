#include<stdio.h>

typedef struct{
    char name[40];
    float tong, LCB;
    float TG, PC;
    unsigned int NC;
} Luong;


int main(){
    Luong nv[200];

    int n;
    
    do{
        printf("Nhap vao so luong nhan vien: "); scanf("%d",&n);
    }while(n<=0);

    for(int i=1; i<=n; i++){
        fflush(stdin); //xóa bộ nhớ đệm
        printf("Nhap ten nhan vien: ");
        
        gets(nv[i].name);

        nv[i].LCB = 1490000;

        printf("Luong phu cap: "); scanf("%f", &nv[i].PC);

        printf("He so truot gia: "); scanf("%f", &nv[i].TG);

        printf("So ngay cong: "); scanf("%d",&nv[i].NC);

        nv[i].tong = (float)nv[i].PC+nv[i].LCB*nv[i].NC*nv[i].TG;

        printf("Ho va ten: %4s, Luong: %4.2f\n",nv[i].name, nv[i].tong);
    }



}