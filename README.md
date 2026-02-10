# shadow-manipulation-lab
C'de pointer (işaretçi) kullanarak bir değişkenin değerini ismiyle değil, doğrudan bellek adresiyle değiştirdiğim ufak bir çalışma.

Değişken ismini hiç kullanmadan, doğrudan adresine gidip orodaki veriyi manipüle etmek. Pointer mantığını ve belleğin alt seviyesini anlamak için yazdım.

*Neden önemli?
  Bu işin temeli aslında "buffer overflow" gibi siber güvenlik açıklarına dayanıyor. Sistemin koruduğunu sandığı bir veriye, yan kapıdan (adresten) sızma mantığını temsil ediyor.

*Debuglarım (çıkarılan dersler)
  Pointer Karışıklığı: İlk başta *ptr ile ptr  arasındaki farkı karıştırdım. Değeri değiştirmek isterken yanlışlıkla adresi değiştirmeye çalıştığımda sistemin neden çöktüğünü (Segmentation Fault) anlamam biraz zaman aldı.

Format Belirleyici: Bellek adresini ekrana basarken %d kullanmaya çalıştım. Adreslerin onluk tabanda değil, 16'lık tabanda olduğunu ve %p kullanmam gerektiğini öğrendim.

Çalıştırma
gcc manipulator.c -o manipulator
./manipulator
