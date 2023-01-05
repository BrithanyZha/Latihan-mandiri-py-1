#include "listpasien.h"

void createList_1301210376(List &L){
    first(L) = nil;
};

infotype newPasien_1301210376(string nama, string nik, int umur,string keluhan){
    infotype pas;

    pas.nama = nama;
    pas.nik = nik;
    pas.umur = umur;
    pas.keluhan = keluhan;
    return pas;
};

adr newElement_1301210376(infotype dataBaru){
    adr P;
    P = new element;
    info(P) = dataBaru;
    next(P) = nil;
    return P;
};

void insertFirst_1301210376(List &L, adr P){
    if (first(L) == nil){
        first(L) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
};

adr deleteFirst_1301210376(List &L){
    adr P;
    P = nil;
    if(first(L) == nil){
        cout << " list kosong" << endl;
        P = nil;
    }else if (next(first(L)) == nil){
        P = first(L);
        first(L) = nil;
    }else{
        P = first(L);
        first(L) = next(first(L));
        next(P) = nil;

    }
    return P;
};

void printList_1301210376(List L){
    adr P;
    int i;

    if (first(L) == nil){
        cout << "List kosong!";
    }else{
        i = 1;
        P = first(L);
        while (P != nil){
            cout << i <<"."<<endl;
            cout << "Nama Pasien: " << info(P).nama <<endl ;
            cout << "NIK Pasien: " << info(P).nik<<endl;
            cout << "Umur: " << info(P).umur<<endl;
            cout << "Keluhan: " << info(P).keluhan<<endl;
            i++;
            cout<<endl;
            P = next(P);
        }
    }
};

void insertLast_1301210376(List &L, adr P){
    int i = 1;
    adr Q;
    Q = first(L);
    while (next(Q) != nil){
        Q = next(Q);
    }
    next(Q) = P;
    P = nil;
};

adr deleteLast_1301210376(List &L, adr &P){
    adr Q;
    Q = first(L);
    P = first(L);
    while (next(P) != nil){
        Q = P;
        P = next(P);
    }
    next(Q) = nil;
};


