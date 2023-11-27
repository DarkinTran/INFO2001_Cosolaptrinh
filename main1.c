#include <stdio.h>
#include <stdlib.h>

struct ThoiGian {
    int gio, phut, giay;
};

struct ThoiGian chuyen_doi_gio(char gio_str[]) {
    struct ThoiGian tg;
    sscanf(gio_str, "%d:%d:%d", &tg.gio, &tg.phut, &tg.giay);
    return tg;
}

int tinh_khoang_cach_thoi_gian(struct ThoiGian tg1, struct ThoiGian tg2) {
    int thoi_gian1 = tg1.gio * 3600 + tg1.phut * 60 + tg1.giay;
    int thoi_gian2 = tg2.gio * 3600 + tg2.phut * 60 + tg2.giay;
    int khoang_cach_thoi_gian = abs(thoi_gian1 - thoi_gian2);
    return khoang_cach_thoi_gian;
}

int main() {
    char gio1_str[10], gio2_str[10];
    struct ThoiGian tg1, tg2;

    printf("Nhap moc thoi gian thu nhat (gio:phut:giay): ");
    scanf("%s", gio1_str);
    tg1 = chuyen_doi_gio(gio1_str);

    printf("Nhap moc thoi gian thu hai (gio:phut:giay): ");
    scanf("%s", gio2_str);
    tg2 = chuyen_doi_gio(gio2_str);

    int khoang_cach = tinh_khoang_cach_thoi_gian(tg1, tg2);

    printf("Khoang cach thoi gian giua 2 moc la: %d giay\n", khoang_cach);

    return 0;
}

