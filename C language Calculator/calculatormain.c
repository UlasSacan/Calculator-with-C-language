#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int islem;
	printf("****Hesap makinesi****\n\n");
	printf("islem seciniz: ");
	scanf("%s",&islem);
	
	int sayi1;
	int sayi2;
	int sonuc;
	
	
	switch(islem)
	{
		
		case '+':
		printf("birinci sayiyi giriniz: ");
		scanf("%d",&sayi1);
		
		printf("ikinci sayiyi giriniz: ");
		scanf("%d",&sayi2);
		
		sonuc = sayi1 + sayi2;
		printf("%d",sonuc);
		break;
		
		case '-':
		printf("birinci sayiyi giriniz: ");
		scanf("%d",&sayi1);
		
		printf("ikinci sayiyi giriniz: ");
		scanf("%d",&sayi2);
		
		sonuc = sayi1 - sayi2;
		printf("%d",sonuc);
		break;
		
		
		case '*':
		printf("birinci sayiyi giriniz: ");
		scanf("%d",&sayi1);
		
		printf("ikinci sayiyi giriniz: ");
		scanf("%d",&sayi2);
		
		sonuc = sayi1 * sayi2;
		printf("%d",sonuc);
		break;
		
		case '/':
		printf("birinci sayiyi giriniz: ");
		scanf("%d",&sayi1);
		
		printf("ikinci sayiyi giriniz: ");
		scanf("%d",&sayi2);
		
		sonuc = sayi1 / sayi2;
		printf("%d",sonuc);
		break;
		default:
			printf("Error!");
		
		
	}
	
	
	
	
	
	
	
	return 0;
}
