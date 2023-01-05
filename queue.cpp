#include "queue.h"

void createPlaylist_13012131416( playlistLagu &Q){
    head(Q) = nil;
    tail(Q) = nil;

};
void createElement_13012131416( infotype laguBaru, adr &pLagu){
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = nil;

};
void enqueue_13012131416( playlistLagu &Q, adr pLagu){
    if (head(Q) == nil && tail(Q)== nil){
        head(Q) = pLagu;
        tail(Q) = pLagu;
    }else{
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
    }


};
void dequeue_13012131416( playlistLagu &Q, adr &pLagu){
    if (head(Q) == nil && tail(Q)== nil){
        pLagu = nil;
        cout << "List Kosong";

    }else if (next(head(Q)) == nil) {
        pLagu = head(Q);
        head(Q) = nil;
        tail(Q) = nil;

    }else{
        pLagu = head(Q);
        head(Q) = next(pLagu);
        next(pLagu) = nil;

    }

};
void showSemuaLagu_13012131416( playlistLagu Q){
    if(head(Q)!=nil && tail(Q) != nil){
        adr cari;
        cari = head(Q);
        while( cari != nil){
            cout<< (info(cari)).Artis<< endl;
            cout << (info(cari)).Judul<< endl;
            cari = next(cari);
        }
    }else{
        cout << "Queue Kosong!!! "<< endl;
    }

};
