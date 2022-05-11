// pointer dizi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;



int main()
{
	cout << "dizi kac elemanli olsun ? giriniz" << endl;
	int eleman;
	cin >> eleman;
	int* dizi;
	dizi = (int*)malloc(eleman * sizeof(int));
	if (dizi == NULL)
		cout << "yetersiz bellek";

	for (int i = 0; i < eleman; i++) {
		cout << "dizinin " << i + 1 << ".elemaninin giriniz";
		cin >> dizi[i];
	
	}
	cout << endl;
	cout << "dizi buyukten kucuge siralaniyor...." << endl;

	for (int i = 0; i <eleman; i++) {

		for (int j = 0; j < eleman; j++) {
			if (dizi[j+1] > dizi[j]) {
				int temp = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < eleman; i++) {
		cout << dizi[i] << " ";
	}

	

	
	
  
}



