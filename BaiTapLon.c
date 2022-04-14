#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>

enum TrangThai {TRONGGAME,TUYCHON,CAIDAT,TROCHOIKETTHUC,THONGTIN} TrangThai;

void MauSac(WORD color)
{ 
    HANDLE Dau_Ra;
    Dau_Ra = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO Thong_Tin_Bo_Dem_Mang_Hinh;
    GetConsoleScreenBufferInfo(Dau_Ra, &Thong_Tin_Bo_Dem_Mang_Hinh);
    WORD Thuoc_Tinh = Thong_Tin_Bo_Dem_Mang_Hinh.wAttributes;
    color &= 0x000f;
    Thuoc_Tinh &= 0xfff0; Thuoc_Tinh |= color;
    SetConsoleTextAttribute(Dau_Ra, Thuoc_Tinh);
}

void VeKhung()
{
    int i=0;
        for(i; i < 105; i++)
        {
                printf("=");
        }
        i=0;
        int j=0;
        for(j; j < 25 ; j++)
        {
            printf("\n");
            i=0;
            for(i; i < 105; i++)
            {
                printf((i==0 || i==102)?"||":" ");
            }
        }
        i=0;
        printf("\n");
        for(i ; i < 105; i++)
        {
            printf("=");
        }
}

void TuyChon()
{

}
    
void CaiDat()
{

}

void TrongGame()
{
    VeKhung();
    TrangThai = 10;
}

void TroChoiKetThuc()
{
printf("ABCD"); 
}
    
void ThongTin()
{

}

int main()
{
   
    MauSac(5);

    while(1)
    {
         switch (TrangThai)
        {
        case TUYCHON:
            TuyChon();
            break;
        case CAIDAT:
            CaiDat();
            break;
        case TRONGGAME:
            TrongGame();
            break;
        case TROCHOIKETTHUC:
            TroChoiKetThuc();
            break;
            case THONGTIN:
            ThongTin();
            break;
        }
    }
}
