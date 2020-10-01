#include <stdio.h>
#include <stdlib.h>
int topla(int,int);
int carp(int,int);
int cikart(int,int);
float bol(float,float);
int mod(int,int);
int main()
{
	int a=0;
	int s1=0, s2=0,sonuc=0, s3=0;
en_bas:
	printf("\n=====MENU=====\n(1) \tTOPLAMA\n(2) \tCIKARMA\n(3) \tCARPMA\n(4) \tBOLME\n(5) \tMOD ALMA\n(6) \tGEOMETRIK SEKILLER\n(0) \tCIKIŞ\n");
	scanf("%d",&a);

	if(a == 1)
{
	printf("\nIKI TANE SAYI GIRIN\n");
	scanf("%d %d",&s1,&s2);
	printf("\nSonuc\t%d\n",topla(s1,s2));
	goto en_bas;
}

	if(a == 2)
{
	printf("\nIKI TANE SAYI GIRIN\n");
	scanf("%d %d",&s1,&s2);
	printf("\nSonuc\t%d\n",cikart(s1,s2));
	goto en_bas;
}
	if(a == 3)
{
	printf("\nIKI TANE SAYI GIRIN\n");
	scanf("%d %d",&s1,&s2);
	printf("\nSonuc\t%d\n",carp(s1,s2));
	goto en_bas;
}
	if(a == 4)
{
	printf("\nIKI TANE SAYI GIRIN\n");
	scanf("%f%f",&s1,&s2);
	printf("\nSonuc\t%f\n",bol(s1,s2));
	goto en_bas;
}
	if(a == 5)
{
	printf("\nIKI TANE SAYI GIRIN\n");
	scanf("%d%d",&s1,&s2);
	printf("\nSonuc\t%d\n",mod(s1,s2));
	goto en_bas;
}
	if(a == 0)
exit(0);

if( a == 6 )
ikinci_enbas:
{
	int b=0;
	printf("\n====GEOMETRIK SEKIL SECIN====\n(1) \tKARE\n(2) \tUCGEN\n(3) \tDIKDORTGEN\n(4) \tDAIRE\n(5) \tGERI\n(6) \tCIKIS\n");
	scanf("%d",&b);
	if( b == 1 )
	{
printf("BIR KENARI GIRIN\n");
scanf("%d",&s1);
printf("KARENIN CEVRESI: %d\nKARENIN ALANI: %d",s1*4,s1*s1);
goto ikinci_enbas;
	}
			if( b == 2 )
			{
				int deger;
printf("\nTABAN VE YUKSEKLIGI GIRIN\n");
scanf("%d%d",&s1,&s2);
printf("\nUCGENIN ALANI: %d",(s1 * s2) / 2);
printf("\nCEVRE HESAPLAMAK ISTERMISINIZ?\n(1) \tEVET\n(2) \tHAYIR\n");
scanf("%d",&deger);
if(deger == 1)
{
	printf("KENARLARI GİRİN\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	printf("CEVRENİZ %d\n",(s1 + s2 + s3));
goto ikinci_enbas;
}
	if(deger == 2)
goto ikinci_enbas;
}
if( b == 3 )
{
printf("IKI KENARI GIRIN\n");
scanf("%d%d",&s1,&s2);
printf("DIKDORTGENIN CEVRESI: %d\nDIKDORTGENIN ALANI: %d",s1*2+s2*2,s1*s2);
goto ikinci_enbas;
}	
if( b == 4 )
{
float yaricap;
#define pi 3.14
printf("YARICAP GIRIN\n");
scanf("%f",&yaricap);
printf("DAIRENIN CEVRESI: %f\nDAIRENIN ALANI: %f",(2 * yaricap) * pi, ( yaricap * yaricap ) * pi);
goto ikinci_enbas;
}	
if( b == 5 )
{
goto en_bas;
}	
if ( b == 6 )
{
exit(0);
}
	
}
return 0;
}


int topla(int s1, int s2){
	int toplam;
	toplam = s1 + s2;
	return toplam;
}
int cikart(int s1, int s2){
	int cikart;
	cikart = s1 - s2;
	return cikart;
}
int carp(int s1, int s2){
	int carpim;
	carpim = s1 * s2;
	return carpim;
}
float bol(float s1, float s2){
	float bolum ;
	bolum = s1 / s2;
	return bolum;
}

int mod(int s1, int s2){
	int kalan;
	kalan = s1 % s2;
	return kalan;
}
