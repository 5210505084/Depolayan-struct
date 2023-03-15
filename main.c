#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char ad[50];
	char soyad[50];
	char adres[50];
	char no[10];
	int yas;
	
} Kisisel;

int main(int argc, char *argv[]) {
	Kisisel ogrenci1;
	strcpy(ogrenci1.ad, "Ahmed");
	strcpy(ogrenci1.soyad, "Mohammed");
	strcpy(ogrenci1.no, "05392467083");
	strcpy(ogrenci1.adres, "Istanbul");
	ogrenci1.yas = 15;
	
	Kisisel ogrenci2;
	strcpy(ogrenci2.ad, "Mert");
	strcpy(ogrenci2.soyad, "Salim");
	strcpy(ogrenci2.no, "05393467488");
	strcpy(ogrenci2.adres, "Ankara");
	ogrenci2.yas = 17;
	
	Kisisel ogrenci3;
	strcpy(ogrenci3.ad, "Sulaiman");
	strcpy(ogrenci3.soyad, "Ahmet");
	strcpy(ogrenci3.no, "05343427498");
	strcpy(ogrenci3.adres, "Kiriklareli");
	ogrenci3.yas = 16;
	
	Kisisel ogrenci4;
	strcpy(ogrenci4.ad, "Eymen");
	strcpy(ogrenci4.soyad, "Mansoor");
	strcpy(ogrenci4.no, "05349427489");
	strcpy(ogrenci4.adres, "Adana");
	ogrenci4.yas = 18;
	
	Kisisel ogrenci5;
	strcpy(ogrenci5.ad, "Anas");
	strcpy(ogrenci5.soyad, "Nazar");
	strcpy(ogrenci5.no, "05343426493");
	strcpy(ogrenci5.adres, "Kiriklareli");
	ogrenci5.yas = 15;
	
	
	print_ogrenci(ogrenci1);
	print_ogrenci(ogrenci2);
	print_ogrenci(ogrenci3);
	print_ogrenci(ogrenci4);
	print_ogrenci(ogrenci5);
	
	return 0;
}

void print_ogrenci(Kisisel ogrenci) {
	printf("Ogrencinin adi: %s\n", ogrenci.ad);
	printf("Ogrencinin soyadi: %s\n", ogrenci.soyad);
	printf("Ogrencinin yasi: %d\n", ogrenci.yas);
	printf("Ogrencinin adresi: %s\n", ogrenci.adres);
	printf("Ogrencinin no: %s\n", ogrenci.no);
	printf("###############\n");
}
