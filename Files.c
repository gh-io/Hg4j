/* Files: File1.c, File2.c */
#include <stdio.h>
__attribute__((constructor))
static void initializer1() {
    printf("[%s] [%s]\n", __FILE__, __FUNCTION__);
}
 
__attribute__((constructor))
static void initializer2() {
    printf("[%s] [%s]\n", __FILE__, __FUNCTION__);
}
 
__attribute__((constructor))
static void initializer3() {
    printf("[%s] [%s]\n", __FILE__, __FUNCTION__);
}
 
__attribute__((destructor))
static void finalizer1() {
    printf("[%s] [%s]\n", __FILE__, __FUNCTION__);
}
 
__attribute__((destructor))
static void finalizer2() {
    printf("[%s] [%s]\n", __FILE__, __FUNCTION__);
}
 
__attribute__((destructor))
static void finalizer3() {
    printf("[%s] [%s]\n", __FILE__, __FUNCTION__);
}
