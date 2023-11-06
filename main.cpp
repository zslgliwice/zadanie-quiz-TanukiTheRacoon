#include <iostream>
#include <windows.h>
#include <locale.h>
using namespace std;
int punkty;
void pytanie(string pyt,string odp,string podp,int time){
    cout<<pyt<<endl;

    cout<<"Podaj odpowiedz:";
    cin>>odp;
    if(odp == podp){
        cout<<"Dobra odpowiedz!";
        punkty++;
    }
    else{
        cout<<"zla odpowiedz poprawna odp:" + podp;
    }
    Sleep(time);
    system("CLS");
}
bool endsWith(
            const string str,
            const string subStr) {
            size_t strLen = str.length();
            size_t subStrLen = subStr.length();

            return  strLen >= subStrLen &&
                str.compare(strLen - subStrLen, subStrLen, subStr) == 0;
}
int main(){
    setlocale(LC_CTYPE, "Polish");
    string imie;
    cout<<"Podaj imie:";
    cin>>imie;
    pytanie("W jakim roku konosla sega mega drive/genesis miała premiere w USA?\na)1989\nb)1970\nc)2000\nd)2001","","a",6000);
    pytanie("Jaka byla najlepiej sprzedająca sie gra na sega mega drive \na)Street fighter II\nb)super mario bros\nc)Sonic the Hedgehog 2\nd)The legend of Zelda","","c",6000);
    pytanie("Jakie moduły wyszły do sega genesis\na)sega cd\nb)sega 16x\nc)sega 64x\nd)sega powerhouse","","a",6000);
    pytanie(" Co takiego posiadała konsola segi, czcego brakowało konsoli nintendo?\na)Blast Processing\nb)antialiasing\nc)fidelityFX\nd)DLSS","","a",6000);
    pytanie("Czy kartridże do Segi Mega Drive(japońskie wydanie) pasowały do segi genesis(Amerykańskie wydanie)\na)Tak\nb)Nie","","b",6000);
    if(endsWith(imie,"a")){
        cout<<"Gratulacje " << imie <<",zdobyłaś "<<punkty<<"/5 punktów";
    }
    else{
        cout<<"Gratulacje " << imie <<",zdobyłeś "<<punkty<<"/5 punktów";
    }
    return 0;
}
