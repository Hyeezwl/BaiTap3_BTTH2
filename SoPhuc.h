#ifndef SOPHUC_H
#define SOPHUC_H


class SoPhuc
{
    public:
        SoPhuc();
        virtual ~SoPhuc();
        void Nhap();
        void Xuat();
        SoPhuc Tong(SoPhuc SoPhuc2);
        SoPhuc Hieu(SoPhuc SoPhuc2);
        SoPhuc Tich(SoPhuc SoPhuc2);
        SoPhuc Thuong(SoPhuc Sophuc2);

    protected:

    private:
        double iThuc, iAo;
};

#endif // SOPHUC_H
