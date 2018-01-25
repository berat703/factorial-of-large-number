#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "Liste.hpp"
#include "Sayi.hpp"
#include "Dugum.hpp"
#include "Yigit.hpp"
#include <ctime>
using namespace std;




int main() {
	int sayac=0;
	int eskiDeger=0;
	int deger;
	string lastResult;
	Node *mNode = new Node();
	Sayi *sayi = new Sayi();
	Yigit S;
	while (true) {

		/* FAKTORÝYEL ALMA KISMI*/

		deger=0;
		cout << "bir sayi girin....:";
		cin >> deger;

		if (deger > eskiDeger) {
			eskiDeger = deger;
		}

		if (eskiDeger < deger && eskiDeger>0) {//eskiden hesaplanmýs deger yeni degerden kucukse üzerine iþlem yap
			const clock_t begin_time = clock();
			for (int i = eskiDeger + 1; i <= deger; i++) {
				lastResult=sayi->multiply(lastResult, to_string(i));
				S.push(lastResult);
				mNode->bastanSil();
			}
			cout<<S.getTop()<<endl;
			cout << "Hesaplanma suresi ....:";
			cout<<float(clock() - begin_time) / CLOCKS_PER_SEC<<" saniye"<<endl;


		}
		else if(eskiDeger>deger) {//deglise yeni yigit olustur.
			const clock_t begin_time = clock();
			Yigit y;
			string sDeger;
			string yDeger;
			int donmeSayisi = eskiDeger - deger;
			for (int i = eskiDeger; i > deger; i--) {
				sDeger = S.getVal();
				y.push(sDeger);
			}
			cout<<S.getTop()<<endl<<endl;
			cout << "Hesaplanma suresi ....:";
			cout << float(clock() - begin_time) / CLOCKS_PER_SEC<<" saniye"<<endl;
			for (int i = 0; i < donmeSayisi; i++) {
				yDeger = y.getVal();
				S.push(yDeger);
			}

		}
		else {
			const clock_t begin_time = clock();
			string result = "1";
			for (int i = 1; i <= deger; i++) {
				result = sayi->multiply(result, to_string(i));
				cout << i << " hesaplaniyor...." << endl;
				S.push(result);
				mNode->bastanSil();
			}
			system("CLS");
			cout << endl << "Sonuc.....:  " << endl << endl << result << endl << endl;
			S.getTop();
			cout << "Hesaplanma suresi ....:";
			cout << float(clock() - begin_time) / CLOCKS_PER_SEC<<" saniye"<<endl;
			sayac++;
			lastResult = result;
		}

	}
	
	system("PAUSE");
	return 0;

}