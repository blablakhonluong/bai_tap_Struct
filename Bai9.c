#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
    char msach[30];
    char title[40];
    char author[20];
    char nxb[30];
    unsigned int namxb;
}sach;

sach nhap(){
    sach a;
        printf("Nhap ma so sach: ");
        fflush(stdin);
        gets(a.msach);
        printf("Nhap tieu de sach: ");
        fflush(stdin);
        gets(a.title);
        printf("Nhap tac gia sach: ");
        fflush(stdin);
        gets(a.author);
        printf("Nhap nha xuat ban sach: ");
        fflush(stdin);
        gets(a.nxb);
        printf("Nhap nam xuat ban sach: ");
        do{
            scanf("%d",&a.namxb);
        }while(a.namxb<1000);

    return a;
}

void xuat(sach a){
    printf("_________________________\n");
    printf("Ma so sach: %2s\n",a.msach);
    printf("Tieu de sach: %2s\n",a.title);
    printf("Tac gia sach: %2s\n",a.author);
    printf("Nha xuat ban sach: %2s\n",a.nxb);
    printf("Nam xuat ban: %d \n",a.namxb);
    printf("_________________________\n");

}

sach tim_sach_theo_ma(sach x[], int n, char input[]){ 
    for(int i = 1; i<=n; i++){
       if(strcmp(x[i].msach,input)==0){
                return x[i];
                break;

    }
        
    }
}

bool tim_sach_theo_tac_gia(sach x, char input[]){    
    
    if(strcmp(x.author,input)==0){
        return true; 
    }
    return false;
}

bool tim_sach_theo_nam_xuat_ban(sach x, int input){ 
    if(x.namxb == input){
        return true;
    }
    return false;



}

bool tim_sach_theo_tieu_de(sach x, char input[]){    
    
   if(strstr(x.title,input)!=NULL){
        return true;
    }
    return false;
}





int main(){

    int n; printf("Nhap so sach cua kho: "); 
    do{
        scanf("%d",&n);
    }while(n<0);
    sach s[3000];

    for(int i=1; i<=n; i++){
        s[i]= nhap();
        xuat(s[i]);
    }

    int choice;
    printf("____________Menu____________\n");
    
    printf("1. Nhap ma so va tim sach\n");
    printf("2. Tim va in ra tat ca cac so sach co cung tac gia duoc nhap tu ban phim\n");
    printf("3. Loc ra cac cuon xuat ban nam nao do\n");
    printf("4. Tim va in ra cuon ma nhan de co chua tu bat ky dc nhap tu ban phim\n");
    printf("Lua chon cua ban: ");
     scanf("%d",&choice);

    
    switch(choice){
        sach res;
       
        case 1: 
            printf("Nhap ma so: ");
            fflush(stdin);
            char ma_so[30];
            gets(ma_so);
             res = tim_sach_theo_ma(s,n,ma_so);
            xuat(res);    
        break;

        case 2:
            printf("Nhap ten tac gia: ");
            fflush(stdin);
            char tac_gia[20];
             gets(tac_gia);
           
             for(int i = 1; i<=n; i++)
                if(tim_sach_theo_tac_gia(s[i],tac_gia))
                     xuat(s[i]);  
        break;
        case 3: ; //biến int choice được coi là nhãn được ưu tiên hơn statement
            int nam_xb;
            scanf("%d",&nam_xb);
            for(int i = 1; i<=n; i++)
                if(tim_sach_theo_nam_xuat_ban(s[i],nam_xb))
                     xuat(s[i]);  
            break; 
        break;
        case 4:
            printf("Nhap chuoi: ");
            fflush(stdin);
            char search_title[30];
             gets(search_title);
            for(int i = 1; i<=n; i++)
                if(tim_sach_theo_tieu_de(s[i],search_title))
                     xuat(s[i]);  
            break;
             
    
        default:
            printf("Nhap ko hop le, ngu cac");
            break;
    }










}