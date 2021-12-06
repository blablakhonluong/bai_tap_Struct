// Viết chương trình nhập danh sách một lớp sinh viên với họ tên, ngày tháng
// năm sinh, sau đó sắp xếp danh sách sinh viên giảm dần theo tuổi rồi in kết quả
// trước và sau khi sắp xếp

#include<stdio.h>


typedef struct{
    char name[40];
    unsigned int ngaysinh, thangsinh, namsinh;
} SV;



int main(){
    SV stu[50];
    int n;
    
    do{
        printf("Nhap vao so luong sinh vien: "); scanf("%d",&n);
    }while(n<=0);

    for(int i=1; i<=n; i++){
        fflush(stdin); //xóa bộ nhớ đệm
        printf("Nhap ten sinh vien: ");
        
        gets(stu[i].name);

        printf("Nhap ngay sinh: "); scanf("%d",&stu[i].ngaysinh);

        printf("Nhap thang sinh: "); scanf("%d", &stu[i].thangsinh);

        printf("Nhap nam sinh: "); scanf("%d", &stu[i].namsinh);

        printf("Ho va ten: %4s, Ngay sinh: %d, Thang Sinh: %d, Nam Sinh: %d\n",stu[i].name,stu[i].ngaysinh,stu[i].thangsinh, stu[i].namsinh);
    }

     for(int i=1; i<=n; i++){
         for(int j=i+1;j<=n;j++){
             if(stu[i].namsinh>stu[j].namsinh){
                 SV tmp = stu[i];
                 stu[i]= stu[j];
                 stu[j] = tmp;
                 
             }
         }
        
    }

    printf("Sap xep sinh vien theo nam sinh\n");

    for(int i=1; i<=n; i++){
        printf("Ho va ten: %4s, Ngay sinh: %d, Thang Sinh: %d, Nam Sinh: %d\n",stu[i].name,stu[i].ngaysinh,stu[i].thangsinh, stu[i].namsinh);
    }





}



