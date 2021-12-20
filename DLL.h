#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

typedef struct elm_MK *adr_MK;

typedef struct elm_Mhs *adr_Mhs;

struct MK{
    string namaMK, namaKelas, jenisMhs;
    int kuota, jumlah;
};

struct Mhs{
    string namaMhs, nim, kelas, jenisMhs;
};

struct elm_MK{
    MK info;
    adr_MK next, prev;
    adr_jual nextMhs;
};

struct elm_Mhs{
    Mhs info;
    adr_jual next, prev;
};

struct mll{
    adr_sales first, last;
};


#endif // DLL_H_INCLUDED
