#include<stdio.h>

/*Viết chương trình nhập danh sách một lớp sinh viên với họ tên, điểm toán, tin
ngoại ngữ của từng người. Tính điểm trung bình và in ra kết quả*/

typedef struct{
    char name[40];
    unsigned int diemToan, diemTin, diemNN;
    float diemTB;
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

        printf("Nhap diem Toan: "); scanf("%d",&stu[i].diemToan);

        printf("Nhap diem Tin: "); scanf("%d", &stu[i].diemTin);

        printf("Nhap diem Ngoai Ngu: "); scanf("%d", &stu[i].diemNN);

        stu[i].diemTB = (float)(stu[i].diemToan+stu[i].diemTin+stu[i].diemNN)/3;

         printf("Ho va ten: %4s,\t Diem trung binh: %8.2f\n",stu[i].name,stu[i].diemTB);

    }



}



