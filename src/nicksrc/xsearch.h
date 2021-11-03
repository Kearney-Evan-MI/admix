#include <search.h>  

int xfindit(char *ss)   ; 
int  xloadsearchx(char **ss, int n)   ; 
int finddup(char **ss, int n) ;
void xloadsearch(char **ss, int n)   ; 
void xdestroy()  ;

void xhcreate (int n)  ;
void xhdestroy()  ;
ENTRY *xhsearch(ENTRY item, ACTION act)  ;

int xlookup(char *key, ACTION act)  ;
int xhash (char *key)  ;
int xhash1(int ww)  ;
int xhash2 (int x)  ;
int xcshift(int x, int shft)  ;
int stringhash(char *key) ;
void setfancyhash(int val) ;
long xlhash (long x) ;  
int xshash (int x) ;  
int fnv_hash(char *strng) ;

#define FNV_PRIME           0x01000193
#define FNV_OFFSET_BASIS    0x811c9dc5

