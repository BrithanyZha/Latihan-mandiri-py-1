#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

#define info(Q) Q -> info
#define next(Q) Q -> next
#define head(Q) Q.head
#define tail(Q) Q.tail
#define nil NULL
typedef struct infotype{
    string Artis;
    string Judul;
};

typedef struct element *adr;

struct element{
    infotype info;
    adr next;

};

struct playlistLagu{
    adr head;
    adr tail;
};

void createPlaylist_13012131416( playlistLagu &Q);
void createElement_13012131416( infotype laguBaru, adr &pLagu);
void enqueue_13012131416( playlistLagu &Q, adr pLagu);
void dequeue_13012131416( playlistLagu &Q, adr &pLagu);
void showSemuaLagu_13012131416( playlistLagu Q);


#endif // QUEUE_H_INCLUDED
