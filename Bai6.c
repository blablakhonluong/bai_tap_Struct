#include<stdio.h>

typedef unsigned int ui;

typedef struct{
    char name[40];
    ui tuoi;
    float dtb;

}SV;

void tangdanhoten(SV sv[], int n){
    for(int i=1; i<=n; i++){
         for(int j=i+1;j<=n;j++){
             if(sv[i].name[0]>sv[j].name[0]){
                 SV tmp = sv[i];
                 sv[i]= sv[j];
                 sv[j] = tmp;
                 
             }
         }
        
    }
    for(int i=1; i<=n; i++){
        printf("Ho va ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n",sv[i].tuoi);
        printf("Diem trung binh: %.2f\n",sv[i].dtb);
    }
}

void diemtb_nhohon5(SV sv[], int n){
    for(int i=1; i<=n; i++){
        if(sv[i].dtb<5.00){
        printf("Ho va ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n",sv[i].tuoi);
        printf("Diem trung binh: %.2f\n",sv[i].dtb);
        }
    }
}

void diemtb_lonhon5(SV sv[], int n){
    for(int i=1; i<=n; i++){
         for(int j=i+1;j<=n;j++){
             if(sv[i].dtb<sv[j].dtb){
                 SV tmp = sv[i];
                 sv[i]= sv[j];
                 sv[j] = tmp;
                 
             }
         }
        
    }
    for(int i=1; i<=n; i++){
        if(sv[i].dtb>=5.00){
        printf("Ho va ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n",sv[i].tuoi);
        printf("Diem trung binh: %.2f\n",sv[i].dtb);
        }
    }




}


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

        printf("Nhap diem trung binh: "); scanf("%f", &sv[i].dtb);
       
    }
    printf("Sap xep tang dan theo ho ten: \n");
    tangdanhoten(sv,n);

    printf("Cac ban co diem nho hon 5: \n");
    diemtb_nhohon5(sv,n);
    
    printf("Cac ban co diem lon hon bang 5 va sap xep giam dan: \n");
    diemtb_lonhon5(sv,n);





}