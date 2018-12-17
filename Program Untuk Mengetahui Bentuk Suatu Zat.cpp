#include<iostream>
using namespace std;

int main (){
int a;

cout<<"PROGRAM UNTUK MENGETAHUI BENTUK SUATU ZAT"<<endl;

cout<<"Masukan Derajat Suhu Zat = ";
cin>>a;
if(a<0)
    cout<<"Suhu "<<a<<" Derajat Adalah Zat Beku ";
else
    cout<<"Suhu "<<a<<" Derajat Adalah Zat Tidak Beku ";
return 0;

}
