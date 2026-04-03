#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main(){
    SoPhuc SoPhuc1, SoPhuc2;
    cout << "Nhap so phuc thu nhat" << endl;
    SoPhuc1.Nhap();
    cout << "Nhap so phuc thu hai" << endl;
    SoPhuc2.Nhap();

    cout << endl;

    cout << "So phuc dau tien: ";
    SoPhuc1.Xuat();
    cout << "So phuc thu hai: ";
    SoPhuc2.Xuat();

    cout << endl;

    cout << "Ket qua phep tinh" << endl;

    SoPhuc tong = SoPhuc1.Tong(SoPhuc2);
    SoPhuc hieu = SoPhuc1.Hieu(SoPhuc2);
    SoPhuc tich = SoPhuc1.Tich(SoPhuc2);
    SoPhuc thuong = SoPhuc1.Thuong(SoPhuc2);

    cout << "Tong= ";
    tong.Xuat();
    cout << endl;
    cout << "Hieu= ";
    hieu.Xuat();
    cout << endl;
    cout << "Tich= ";
    tich.Xuat();
    cout << endl;
    cout << "Thuong= ";
    thuong.Xuat();
    return 0;
}
