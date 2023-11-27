#include <stdio.h>

float tinh_tien_luong(int gio_vao_ca, int gio_ra_ca) {
    int gia_tien_truoc_12h = 6000;
    int gia_tien_sau_12h = 7500;

    int gio_vao_ca_som_nhat = 6;
    int gio_ra_ca_tre_nhat = 18;

    int gio_lam_viec = (gio_ra_ca > gio_ra_ca_tre_nhat ? gio_ra_ca_tre_nhat : gio_ra_ca) - (gio_vao_ca < gio_vao_ca_som_nhat ? gio_vao_ca_som_nhat : gio_vao_ca);

    float tien_luong;
    if (gio_lam_viec <= 0) {
        tien_luong = 0;
    } else if (gio_lam_viec <= 12) {
        tien_luong = gio_lam_viec * gia_tien_truoc_12h;
    } else {
        int gio_lam_truoc_12h = 12;
        int gio_lam_sau_12h = gio_lam_viec - gio_lam_truoc_12h;
        tien_luong = (gio_lam_truoc_12h * gia_tien_truoc_12h) + (gio_lam_sau_12h * gia_tien_sau_12h);
    }
    return tien_luong;
}

int main() {
    int gio_vao_ca, gio_ra_ca;

    printf("Nhap gio vao ca (nguyen): ");
    scanf("%d", &gio_vao_ca);

    printf("Nhap gio ra ca (nguyen): ");
    scanf("%d", &gio_ra_ca);

    float tien_luong = tinh_tien_luong(gio_vao_ca, gio_ra_ca);

    printf("Tong tien luong la: %.2f dong\n", tien_luong);

    return 0;
}

