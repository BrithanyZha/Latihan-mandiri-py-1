#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    playlistLagu Q;
    createPlaylist_13012131416(Q);
    int N, i;
    infotype dataBaru;

    adr p;
    cout << "Masukkan Jumlah Data: ";
    cin >> N;



    i = 1;
    while ( i <= N){
        cout << "Data ke-" << i << endl;
        cout << "Masukkan Data Artis: ";
        cin >> dataBaru.Artis;
        cout << "Masukkan Data Judul: ";
        cin >> dataBaru.Judul;
        createElement_13012131416(dataBaru,p);
        enqueue_13012131416(Q,p);
        i++;


    }

    cout << endl << "Show Semua Lagu: " << endl;
    showSemuaLagu_13012131416(Q);
    while (head(Q) != nil && tail(Q) != nil){
        dequeue_13012131416(Q,p);
    }
    cout << endl << "Show Semua Lagu Setelah Dequeue artis & judul :" << endl;
    showSemuaLagu_13012131416(Q);

    return 0;
}
