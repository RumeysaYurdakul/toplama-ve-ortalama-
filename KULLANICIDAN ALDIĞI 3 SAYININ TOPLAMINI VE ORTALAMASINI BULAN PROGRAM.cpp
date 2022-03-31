#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
double sayi1, sayi2,sayi3,toplam, ortalama;
cout << "kullanıcıdan aldığı 3 sayının toplamını ve ortalamasını alan programa hoş geldiniz"<<endl;
cout << "sayı biri giriniz ";
cin >> sayi1;
cout << "sayı ikiyi giriniz";
cin >> sayi2;
cout << "sayi üçü giriniz";
cin >> sayi3;
toplam = sayi1 + sayi2 + sayi3 ;
cout << "toplamınız" << toplam << endl;
ortalama = toplam / 3;
cout << "ortalamanız" << ortalama << endl;
return 0;
}