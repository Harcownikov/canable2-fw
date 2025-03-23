/*
 * syscalls.c
 *
 *  Created on: Mar 13, 2025
 *      Author: kjvs49
 */

#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int _close(int file)                    { return -1; }
int _lseek(int file, int ptr, int dir) { return 0; }
int _read(int file, char *ptr, int len){ return 0; }
int _write(int file, char *ptr, int len){ return len; }
int _fstat(int file, struct stat *st)  { st->st_mode = S_IFCHR; return 0; }
int _isatty(int file)                  { return 1; }
