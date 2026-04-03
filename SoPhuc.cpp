#include "SoPhuc.h"
#include <iostream>
#include <cmath>
using namespace std;

SoPhuc::SoPhuc()
{
}

SoPhuc::~SoPhuc()
{
}
void SoPhuc::Nhap(){
    cout << "Nhap phan Thuc: ";
    cin >> iThuc;
    cout << "Nhap phan Ao: ";
    cin >> iAo;
}
void SoPhuc::Xuat(){
    if (iAo >= 0){
        cout << iThuc << " + " << iAo << "i" << endl;
    } else {
        cout << iThuc << " + " << -iAo << "i" << endl;
    }
}
SoPhuc SoPhuc::Tong(SoPhuc SoPhuc2){
    SoPhuc KetQua;
    KetQua.iThuc = iThuc + SoPhuc2.iThuc;
    KetQua.iAo = iAo + SoPhuc2.iAo;
    return KetQua;
}
SoPhuc SoPhuc::Hieu(SoPhuc SoPhuc2){
    SoPhuc KetQua;
    KetQua.iThuc = iThuc - SoPhuc2.iThuc;
    KetQua.iAo = iAo - SoPhuc2.iAo;
    return KetQua;
}
SoPhuc SoPhuc::Tich(SoPhuc SoPhuc2){
    SoPhuc KetQua;
    KetQua.iThuc = iThuc * SoPhuc2.iThuc - iAo * SoPhuc2.iAo;
    KetQua.iAo = iThuc * SoPhuc2.iAo + iAo * SoPhuc2.iThuc;
    return KetQua;
}
SoPhuc SoPhuc::Thuong(SoPhuc SoPhuc2){
    SoPhuc KetQua;
    double iMau = SoPhuc2.iThuc * SoPhuc2.iThuc + SoPhuc2.iAo * SoPhuc2.iAo;
    if (iMau != 0){
        KetQua.iThuc = (iThuc * SoPhuc2.iThuc + iAo * SoPhuc2.iAo) / iMau;
        KetQua.iAo = (iAo * SoPhuc2.iThuc - iThuc * SoPhuc2.iAo) / iMau;
    } else {
        cout << "Co loi khi chia" << endl; //bao loi neu chia khong thanh cong
    }
    return KetQua;
}



