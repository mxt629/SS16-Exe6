//
//  main.c
//  SS16 Bai6
//
//  Created by Little Chick on 31/03/2022.
//

#include <stdio.h>
#include <math.h>
float dientich(float , float );
float chuvi(float , float );
int main(int argc, const char * argv[]) {
    float a,b,s;
    char ans;
    int op;
    do
    {
        ans = 'y';
        printf("Nhap chieu dai 2 canh: ");
        scanf("%f%f", &a, &b);
        printf("Nhap lua chon:\n");
        printf("1.Tinh dien tich.\n");
        printf("2.Tinh chu vi.\n");
        printf("Lua chon: ");
        scanf("%d",&op);
        switch (op)
        {
            case 1:
        s = dientich(a, b);
        printf("Dien tich hinh chu nhat la: %0.2f\n",s);
                break;
            case 2:
        s = chuvi(a, b);
        printf("Chu vi hinh chu nhat la: %0.2f\n",s);
                break;
        }
        printf("Ban muon tiep tuc (Y/N) ?");
        fflush(stdin);
        scanf("%c",&ans);
    }while(ans == 'Y' || ans == 'y');
    return 0;
}
float dientich(float chieudai, float chieurong)
{
    float s;
    s = chieudai * chieurong;
    return s;
}
float chuvi(float chieudai, float chieurong)
{
    float c;
    c = (chieudai + chieurong) * 2;
    return c;
}
