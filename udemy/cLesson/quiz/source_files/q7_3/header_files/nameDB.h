#if !defined(_NAMEDB_H_)
#define _NAMEDB_H_
#include <stdio.h>
#include <string.h>

char names[10][256];

void init();
void setName(int, char*);
void showName(int);

#endif // _NAMEDB_H_
