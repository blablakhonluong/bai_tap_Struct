#include<stdio.h>

typedef struct{
    char name[40];
    char sbd[20];
    char ngaysinh[20];
    char que[20];
    unsigned int kv, dt;
    float diemToan, diemLy, diemHoa;

}TS;

int main(){
    TS ts[10000]; int n;
    do{
        printf("Nhap so luong thi sinh: ");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=1; i<=n; i++){
        printf("Nhap ten thi sinh: "); fflush(stdin); gets(ts[i].name);
        printf("Nhap sbd: "); fflush(stdin); gets(ts[i].sbd);
        printf("Nhap que quan: "); fflush(stdin); gets(ts[i].que);
        printf("Nhap ngay sinh: "); fflush(stdin); gets(ts[i].ngaysinh);
      
        do{
            
            printf("Chon khu vuc cua ban: ");
            scanf("%d",&ts[i].kv);

        }while(ts->kv>3);
        do{
            
            printf("Chon loai doi tuong uu tien cua ban: ");
            scanf("%d",&ts[i].dt);

        }while(ts->dt>3 && ts->dt<0);

      

        printf("Nhap diem Toan: "); scanf("%f", &ts[i].diemToan);
        printf("Nhap diem Ly: "); scanf("%f", &ts[i].diemLy);
        printf("Nhap diem Hoa: "); scanf("%f", &ts[i].diemHoa);



    }

    for(int i=1; i<=n; i++){
        float Tong  
        = ts[i].diemToan+ts[i].diemLy+ts[i].diemHoa;

        if(ts[i].dt==1){
            Tong = Tong+1.5;        
        }
        if(ts[i].dt==2){
            Tong = Tong +1;
        }
    

        if(ts[i].kv==1 && Tong > 18.5){
            printf("Ten thi sinh trung tuyen: %s\n", ts[i].name);
            printf("So bao danh: %s\n",ts[i].sbd);
            printf("Que quan: %s\n", ts[i].que);
            printf("Tong diem: %.2f\n",Tong);
            
        }
        if(ts[i].kv==2 && Tong>20){
             printf("Ten thi sinh trung tuyen: %s\n", ts[i].name);
            printf("So bao danh: %s\n",ts[i].sbd);
            printf("Que quan: %s\n", ts[i].que);
            printf("Tong diem: %.2f\n",Tong);
        }
        if(ts[i].kv==3 && Tong>20.5){
            printf("Ten thi sinh trung tuyen: %s\n", ts[i].name);
            printf("So bao danh: %s\n",ts[i].sbd);
            printf("Que quan: %s\n", ts[i].que);
            printf("Tong diem: %.2f\n",Tong);
        }
        



    }





}