
// final odev.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/****************************************************************************
**
**
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...:1
**				ÖĞRENCİ ADI...............:AMRO MOUSA ISMAIL BASEET
**				ÖĞRENCİ NUMARASI.:G211210578
**				DERS GRUBU…………:A
****************************************************************************/



#include <iostream>
#include<cstdlib>
#include<iomanip>
#include<math.h>
using namespace std;

//matrisi olustran kullanci istedigi satir ve sutun gore sayilar ratgele olarakbir fonksiyon olusturuyorum
int matris_olustur(int satir,int sutun,int matris [10][10])
{
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j < sutun; j++)
		{
			srand(time(NULL));
			matris[i][j] = rand() % 10;//rastgele gelen sayilar burda olusan matrisi veriyorum
		}
	}
	return matris[10][10];
}

//matrisi olustran kullanci istedigi satir ve sutun gore sayilar ratgele olarakbir fonksiyon olusturuyorum
int karematris_olustur(int satir,int sutun,float matris [10][10])
{
	for (int i = 0; i < satir; i++)
		for (int j = 0; j < sutun; j++)
		{
			srand(time(NULL));
			matris[i][j] = rand() % 10;//rastgele gelen sayilar burda olusan matrisi veriyorum
		}
	return matris[10][10];
}
//matrisin yazdiran bir fonksiyon olusturuyorum
void matris_yazdir(int satir, int sutun, int yazdir[10][10])
{
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j < sutun; j++)
		{

			cout << yazdir[i][j] << " ";
			if (j == sutun - 1)//her strin sonunda yeni bir satir acma //duzenli olma
				cout << endl;
		}
	}
}
//ters matrisin yazdiran bir fonksiyon olusturuyorum
void tersmatris_yazdir(int satir, int sutun, float yazdir[10][10])
{
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j < sutun; j++)
		{
			cout << yazdir[i][j] << " ";
			if (j == sutun - 1)//her strin sonunda yeni bir satir acma //duzenli olma
				cout << endl;
		}
	}
}
//burda iki matrisin  toplamasi fonksiyonu olusturuyorum
void matris_topla(int birnci_matris[10][10], int ikinci_matris[10][10], int toplama_matrisi[10][10], int M1_satir, int M1_sutun, int M2_satir, int M2_sutun)
{
	//birinci matrisi olusturup yaziriyorum
	matris_olustur(M1_satir, M1_sutun, birnci_matris);
	cout << "\nBirinci matrisi \n";
	matris_yazdir(M1_satir, M1_sutun, birnci_matris);
	//ikinci matrisi olusturup yaziriyorum
	matris_olustur(M2_satir, M2_sutun, ikinci_matris);
	cout << "\n ikinci matrisi \n";
	matris_yazdir(M2_satir, M2_sutun, ikinci_matris);

	
	for (int i = 0; i < M1_satir; i++)
		for (int j = 0; j < M1_sutun; j++)
		{
			toplama_matrisi[i][j] = birnci_matris[i][j] + ikinci_matris[i][j];

		}
	cout << "\nIki matrisinin toplamasi\n\n";
	matris_yazdir(M1_satir, M1_sutun, toplama_matrisi);
}
//burda iki matrisin Farkalmasi fonksiyonu olusturuyorum
void matris_Farkalma(int birnci_matris[10][10], int ikinci_matris[10][10], int fark_matrisi[10][10], int M1_satir, int M1_sutun, int M2_satir, int M2_sutun)
{
	//birinci matrisi olusturup yaziriyorum
	matris_olustur(M1_satir, M1_sutun, birnci_matris);
	cout << "\nBirinci matrisi \n";
	matris_yazdir(M1_satir, M1_sutun, birnci_matris);
	//ikinci matrisi olusturup yaziriyorum
	matris_olustur(M2_satir, M2_sutun, ikinci_matris);
	cout << "\n ikinci matrisi \n";
	matris_yazdir(M2_satir, M2_sutun, ikinci_matris);
	for (int i = 0; i < M1_satir; i++)
		for (int j = 0; j < M1_satir; j++)
		{
			fark_matrisi[i][j] = birnci_matris[i][j] - ikinci_matris[i][j];
		}
	cout << "/nIki matrisinin fark alindi\n";
	matris_yazdir(M1_satir, M1_sutun, fark_matrisi);
}

//matrisin trnspozesi alan bir fonksiyon
void matris_trnspozesi(int Trans[10][10], int matris[10][10], int sutun, int satir)
{
	// trnspozesi alinacak matrisi olusturup yaziriyorum
	matris_olustur(satir, sutun, matris);
	cout << "Transpozesi alinacak matrisi yazdiriyorum\n";
	matris_yazdir(satir, sutun, matris);
	cout << "\ntrnspozesi alinacak matrisi\n";
	for (int i = 0; i < satir; i++)
		for (int j = 0; j < sutun; j++)
		{
			Trans[j][i] = matris[i][j];
		}

	cout << "\nmatrisin transpozesi alindi :\n";
	matris_yazdir(sutun, satir, Trans);
}
//iki matris carpan bir fonksiyon 
void matris_carpma(int carpan[][10], int birnci_matris[10][10], int ikinci_matris[10][10], int M1_satir, int M1_sutun, int M2_satir, int M2_sutun)
{
	//birinci matrisi olusturup yaziriyorum
	matris_olustur(M1_satir, M1_sutun, birnci_matris);
	cout << "\nBirinci matrisi \n";
	matris_yazdir(M1_satir, M1_sutun, birnci_matris);
	//ikinci matrisi olusturup yaziriyorum
	matris_olustur(M2_satir, M2_sutun, ikinci_matris);
	cout << "\n ikinci matrisi \n";
	matris_yazdir(M2_satir, M2_sutun, ikinci_matris);

	int i, j, k;
	for (i = 0; i < M1_satir; i++)
		for (j = 0; j < M2_sutun; j++)
		{
			carpan[i][j] = 0;
		}

	for (i = 0; i < M1_satir + 1; i++)
		for (j = 0; j < M2_sutun; j++)
			for (k = 0; k < M1_satir; k++)
			{

				carpan[i][j] += birnci_matris[i][k] * ikinci_matris[k][j];
			}
	cout << "/nIki matrisinin carpilmasi\n";
	matris_yazdir(M1_satir, M2_sutun, carpan);
}
/*guass jordan kuralli kullanaraak ters matris alan bir fonksiyon*/
void matris_inversi(float matris[10][10], int satirsutun)
{
	karematris_olustur(satirsutun, satirsutun, matris);
	cout << "\n inversi alinacak matrisi yazdiriyorum \n";
	tersmatris_yazdir(satirsutun, satirsutun, matris);
	float  x[10], oran;
	int i, j, k;

	cout << setprecision(3) << fixed;


	/*Matrisi genisletiyorum */
	for (i = 1; i <= satirsutun; i++)
	{
		for (j = 1; j <= satirsutun; j++)
		{
			if (i == j)
			{
				matris[i][j + satirsutun] = 1;
			}
			else
			{
				matris[i][j + satirsutun] = 0;
			}
		}
	}
	/*Gaus jordanin kurrali uguluyorum*/
	for (i = 1; i <= satirsutun; i++)
	{
		if (matris[i][i] == 0.0)
		{
			cout << "Matematiksel Hata!";
			exit(0);
		}
		for (j = 1; j <= satirsutun; j++)
		{
			if (i != j)
			{
				oran = matris[j][i] / matris[i][i];
				for (k = 1; k <= 2 * satirsutun; k++)
				{
					matris[j][k] = matris[j][k] - oran * matris[i][k];
				}
			}
		}
	}
	/*kosegeni 1 yapma*/
	for (i = 1; i <= satirsutun; i++)
	{
		for (j = satirsutun + 1; j <= 2 * satirsutun; j++)
		{
			matris[i][j] = matris[i][j] / matris[i][i];
		}
	}
	cout << "\nmatrisin tersini yazdiriyorum\n\n";
	tersmatris_yazdir(satirsutun, satirsutun, matris);

}
//bir matrisin izisi bulan fonksiyon
void matris_izi(int izi, int matrix[][10], int satirsutun)
{
	// izi bulanacak matrisi   olusturup yaziriyorum
	matris_olustur(satirsutun, satirsutun, matrix);
	cout << "/izi bulanacak matrisi matrisi \n";
	matris_yazdir(satirsutun, satirsutun, matrix);
	for (int i = 0; i < satirsutun; i++)
	{
				cout << izi << "+" << matrix[i][i] << "\n";
					izi += matrix[i][i];
	}
	cout << "\nmatrisin izisi =\t" << izi;

}



int main()
{
	char secim;
	//	Program menü (do while)kullanarak yapiyiorum
	do
	{
		//kullanacak degiskenler tanidim
		int M1_satir, M1_sutun, M2_satir, M2_sutun, birinci_matris[10][10], ikinci_matris[10][10], toplama_matris[10][10],carpan[10][10], Trans[10][10],izi=0;
		float ters_matris[10][10];
		cout << "\n\n\nyapmak istedeiginiz islem seciniz :"
			<< "\n1.iki Matrisin Toplanmasi icin 1 e Basiniz"
			<< "\n2.iki Matrisin Fark Almasi icin 2 e Basiniz"
			<< "\n3.iki Matrisin Carpilmasi icin 3 e Basiniz"
			<< "\n4.Bir Matrisin izi Hesaplanmasi icin 4 e Basinin"
			<< "\n5.Bir Matrisin Ters Alinmasi icin 5 e Basiniz"
			<< "\n6.Bir Matrisin Transpozesi alinmasi icin 6 e Basiniz"
			<< "\n7.Programi sonlandirmak icin 7 e basininz\n";
		cin >> secim;
		switch (secim)
		{
		case '1'://1 e basarsa iki matrisi toplanmasi 
			cout << "iki matrisin ekleme kurallari "
				<< "\niki matrisin ayni sutun ve satir sayisi olmali";
			cout << "\nBirinci matrisi icin Satir ve sutun [1,10] sayisi girin\n";
			//birinci matrisin satir ve sutun giridiriiyor
			cin >> M1_satir;
			cin>> M1_sutun;
			cout << "\nikinci matrisi icin Satir ve sutun [1,10] sayisi girin\n";
			//ikinci matrisin satir ve sutun giridiriiyor
			cin >> M2_satir;
			cin >> M2_sutun;
			//(if)bir Kosul Eger ekle kuralari uyumazsa hata verir ve yeniden sutunn ve say girdirlmesi gerekir
			if ((M2_satir == M1_satir) && (M2_sutun == M1_sutun))
			{
				//iki matrisin toplanmasi fonksiyonu  cagiriyorum
				matris_topla(birinci_matris, ikinci_matris, toplama_matris, M1_satir, M1_sutun, M2_satir, M2_sutun);
			}
			else
			{
				cout << "\Farkalma hatasi \n";
				cout << "iki matrisin ekleme kurallari "
					<< "\niki matrisin ayni sutun ve satir sayisi olmali";
				cout << "\nbirinci matrisi icin satir ve sutun [1,10] sayisi girin\n";
				cin >> M1_satir; 
				cin >> M1_sutun;
				cout << "\nikinci matrisi icin satir ve sutun [1,10] sayisi girin\n";
				cin >> M2_satir;
				cin >> M2_sutun;
			}
			
			break;
		case '2'://2 e basarsa iki matrisi fark almasi 
			cout << "iki matrisden fark alma kurallari "
				<< "\niki matrisin ayni sutun ve satir sayisi olmali";
			cout << "\nBirinci matrisi icin Satir ve sutun [1,10] sayisi girin\n";
			//birinci matrisin satir ve sutun giridiriiyor
			cin >> M1_satir;
			cin >> M1_sutun;
			cout << "\nikinci matrisi icin Satir ve sutun [1,10] sayisi girin\n";
			//ikinci matrisin satir ve sutun giridiriiyor
			cin >> M2_satir;
			cin >> M2_sutun;
			//bir Kosul Eger Farkalma kuralari uyumazsa hata verir ve yeniden sutunn ve say girdirlmesi gerekir

			if ((M2_satir == M1_satir) && (M2_sutun == M1_sutun))
			{

				//iki matrisin Fark almasi fonksiyonu cagiriyorum
				matris_Farkalma(birinci_matris, ikinci_matris, toplama_matris, M1_satir, M1_sutun, M2_satir, M2_sutun);
			}
			else
			{
				cout << "\ntoplama hatasi \n";
				cout << "iki matrisin ekleme kurallari "
					<< "\niki matrisin ayni sutun ve satir sayisi olmali";
				cout << "\nbirinci matrisi icin satir ve sutun [1,10] sayisi girin\n";
				cin >> M1_satir;
				cin >> M1_sutun;
				cout << "\nikinci matrisi icin satir ve sutun [1,10] sayisi girin\n";
				cin >> M2_satir;
				cin >> M2_sutun;
			}
			
			break;
		case'3':
			cout << "iki matrisin Carpma kurallari "
				<< "\niki matrisinin carpebilmeniz icin birinci matrisinin sutunu ikinci matrisinin satirina iset olmali\n ";
			
			cout << "\nBirinci matrisi icin Satir ve sutun [1,10] sayisi girin\n";
			cin >> M1_satir;
			cin >> M1_sutun;
			cout << "\nikinci matrisi icin Satir ve sutun [1,10] sayisi girin\n";
			cin >> M2_satir;
			cin >> M2_sutun;
			//(while)bir dogu Eger carpma kuralari uyumazsa hata verir ve yeniden sutunn ve say girdirlmesi gerekir
			while (M1_sutun != M2_satir)
			{
				cout << "\nCarpma hatasi \n";
				cout << "iki matrisin Carpma kurallari "
					<< "\niki matrisinin carpebilmeniz icin birinci matrisinin sutunu ikinci matrisinin satirina iset olmali ";
				cout << "\nbirinci matrisi icin satir ve sutun [1,10] sayisi girin\n";
				cin >> M1_satir;
				cin >> M1_sutun;
				cout << "\nikinci matrisi icin satir ve sutun [1,10] sayisi girin\n";
				cin >> M2_satir;
				cin >> M2_sutun;
			}
			//iki matrisin carpma fonksiyonu cagiriyorum
			matris_carpma(carpan, birinci_matris, ikinci_matris, M1_satir, M1_sutun, M2_satir, M2_sutun);
			break;
		case'4':
			cout << "\nbir matrisinin izi bulma kurallari "
				<< "Kare matris olmali sutun sayisi satir sayisiye isset olmali\n ";
			cout << "\n matris icin Satir ve sutun [1,10] sayisi girin\n";
			//matrisin satir ve sutun giridiriiyor
			cin >> M1_satir;
			cin >> M1_sutun;
			while (M1_satir != M1_sutun)
			{
				cout << "hatta sutun sayisi satir sayisi isset degil";
				cout << "\nbir matrisinin izi bulma kurallari "
					<< "Kare matris olmali ayni sutun ve satir sayi sayisi olmali\n ";
				cin >> M1_satir;
				cin >> M1_sutun;
			}
			// matrisin izi bulma fonksiyonu cagiriyorum
			matris_izi(izi ,birinci_matris,M1_satir);

			break;
		case'5':

			cout << "\nbir matrisinin ters bulma kurallari "
				<< "Kare matris olmali sutun sayisi satir sayisiye isset olmali\n ";
			cout << "\n matris icin Satir ve sutun [1,10] sayisi girin\n";
			//matrisin satir ve sutun giridiriiyor
			cin >> M1_satir;
			cin >> M1_sutun;
			//(while)bir dogu Eger ters matrisin kurallari uyumazsa hata verir ve yeniden sutunn ve say girdirlmesi gerekir
			while (M1_satir != M1_sutun)
			{
				cout << "hatta sutun sayisi satir sayisi isset degil";
				cout << "\nbir matrisinin ters bulma kurallari "
					<< "Kare matris olmali ayni sutun ve satir sayi sayisi olmali\n ";
				cin >> M1_satir;
				cin >> M1_sutun;
			}
			// matrisin Ters bulma fonksiyonu cagiriyorum
			matris_inversi(ters_matris, M1_satir);
			break;
		case'6':
			// matrisin satir ve sutun giridiriiyor
			cout << "\n matris icin Satir ve sutun [1,10] sayisi girin\n";
			cin >> M1_satir;
			cin >> M1_sutun;
			// matrisin Transpozesi  bulma fonksiyonu cagiriyorum
			matris_trnspozesi(Trans, birinci_matris,M1_sutun ,M1_satir);
			break;
		default:
			break;
		}
	} while (secim!='7');
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
