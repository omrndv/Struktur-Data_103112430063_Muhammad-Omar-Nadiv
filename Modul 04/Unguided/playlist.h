#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <string>
using namespace std;

struct Lagu {
    string judul;
    string penyanyi;
    float durasi;
    Lagu* next;
};

struct Playlist {
    Lagu* head;
};

void createPlaylist(Playlist &P);
Lagu* createLagu(string judul, string penyanyi, float durasi);
void insertFirst(Playlist &P, Lagu* L);
void insertLast(Playlist &P, Lagu* L);
void insertAfter3(Playlist &P, Lagu* L);
void deleteByJudul(Playlist &P, string judul);
void tampilPlaylist(Playlist P);

#endif