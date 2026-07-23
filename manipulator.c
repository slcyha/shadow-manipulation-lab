#include <stdio.h>
int main() {
    int hedef_veri = 100; 
    int *ptr = &hedef_veri;
    printf("[!]  Değer: %d\n", hedef_veri);
    printf("[*] Hedefin Bellek Adresi: %p\n", (void*)ptr);
    printf("\ngerçekleşiyor\n\n");
    *ptr = 500; 
    printf("[+] Yeni Değer: %d\n", hedef_veri);
    return 0;
}
