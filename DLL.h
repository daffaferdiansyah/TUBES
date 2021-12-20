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
    adr_Mhs nextMhs;
};

struct elm_Mhs{
    Mhs info;
    adr_Mhs next, prev;
};

struct mll{
    adr_MK first, last;
};

void Create_list(mll &List);
void newElm_MK(MK info, adr_MK &mk);
void newElm_Mhs(Mhs info, adr_Mhs &mhs);
void insertNew_Mahasiswa(mll &List, adr_MK mk, adr_Mhs mhs);
void insertLast_MK(mll &List, adr_MK mk);
void deleteFirst_Mahasiswa(mll &List, adr_MK mk, adr_Mhs mhs);
void deleteLast_Mahasiswa(mll &List, adr_MK &mk, adr_Mhs &mhs);
void deleteAfter_Mahasiswa(mll &List, adr_MK mk, adr_Mhs prec, adr_Mhs &mhs);
void deleteFirst_Matkul(mll &List, adr_MK mk);
void deleteLast_Matkul(mll &List, adr_MK mk);
void deleteAfter_Matkul(mll &List, adr_MK prec, adr_MK &mhs);
void delete_MK(mll &List, adr_MK mk);
void delete_Mhs(mll &list, adr_MK mk, adr_Mhs mhs);

#endif // DLL_H_INCLUDED
