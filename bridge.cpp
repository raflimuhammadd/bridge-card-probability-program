#include <iostream>
#include <iomanip>

using namespace std;

float set_bridge = 52;
float kartu_merah = 26;
float kartu_hitam = 26;
float kartu_hati = 13;
float kartu_wajik = 13;
float kartu_sekop = 13;
float kartu_keriting = 13;
float kartu_as = 4;
float kartu_king = 4;
float kartu_queen = 4;
float kartu_jack = 4;
float kartu_joker = 2;
float kartu_as_masing = 1;
float kartu_king_masing = 1;
float kartu_queen_masing = 1;
float kartu_jack_masing = 1;
float kartu_2 = 4;
float kartu_3 = 4;
float kartu_4 = 4;
float kartu_5 = 4;
float kartu_6 = 4;
float kartu_7 = 4;
float kartu_8 = 4;


// Input
int main(int argc, char** argv)
{
    char kondisi;
    bool quit;
    cout << "===|| Program Probabilitas Kartu Bridge ||===" << endl;
    cout << "" << endl;
    cout << "Daftar Nomor yang akan anda Pilih" << endl;
    cout << "" << endl;
    do
    {
        int pilih;
        cout << "1.     Muncul kartu merah dalam 1 set bridge" << endl;
        cout << "2.     Muncula kartu hitam dalam 1 set bridge" << endl;
        cout << "3.     Muncula kartu hati dalam 1 set bridge" << endl;
        cout << "4.     Muncul kartu wajik dalam 1 set bridge" << endl;
        cout << "5.     Muncul kartu sekop dalam 1 set bridge" << endl;
        cout << "6.     Muncul kartu keriting dalam 1 set bridge" << endl;
        cout << "7.     Muncul kartu as dalam 1 set bridge" << endl;
        cout << "8.     Muncul kartu king dalam 1 set bridge" << endl;
        cout << "9.     Muncul kartu jack dalam 1 set bridge" << endl;
        cout << "10.    Muncul kartu queen dalam 1 set bridge" << endl;
        cout << "11.    Muncul kartu joker dalam 1 set bridge" << endl;
        cout << "12.    Muncul kartu angka 2 dalam 1 set bridge" << endl;
        cout << "13.    Muncul kartu angka 3 dalam 1 set bridge" << endl;
        cout << "14.    Muncul kartu angka 4 dalam 1 set bridge" << endl;
        cout << "15.    Muncul kartu angka 5 dalam 1 set bridge" << endl;
        cout << "16.    Muncul kartu angka 6 dalam 1 set bridge" << endl;
        cout << "17.    Muncul kartu angka 7 dalam 1 set bridge" << endl;
        cout << "18.    Muncul kartu angka 8 dalam 1 set bridge" << endl << endl;
        cout << "===|| Pilih Salah Satu Nomor ||===" << endl;


        cin >> pilih;
        cout << "Probabilitas Muncul-nya Kartu " << endl;
        if (pilih == 1) {
            cout << fixed << setprecision(5) << kartu_merah / set_bridge << endl;
        }
        else if (pilih == 2) {
            cout << fixed << setprecision(5) << kartu_hitam / set_bridge << endl;
        }
        else if (pilih == 3) {
            cout << fixed << setprecision(5) << kartu_hati / set_bridge << endl;
        }
        else if (pilih == 4) {
            cout << fixed << setprecision(5) << kartu_wajik / set_bridge << endl;
        }
        else if (pilih == 5) {
            cout << fixed << setprecision(5) << kartu_sekop / set_bridge << endl;
        }
        else if (pilih == 6) {
            cout << fixed << setprecision(5) << kartu_keriting / set_bridge << endl;
        }
        else if (pilih == 7) {
            cout << fixed << setprecision(5) << kartu_as / set_bridge << endl;
        }
        else if (pilih == 8) {
            cout << fixed << setprecision(5) << kartu_king / set_bridge << endl;
        }
        else if (pilih == 9) {
            cout << fixed << setprecision(5) << kartu_queen / set_bridge << endl;
        }
        else if (pilih == 10) {
            cout << fixed << setprecision(5) << kartu_jack / set_bridge << endl;
        }
        else if (pilih == 11) {
            cout << fixed << setprecision(5) << kartu_joker / set_bridge << endl;
        }
        else if (pilih == 12) {
            cout << fixed << setprecision(5) << kartu_2 / set_bridge << endl;
        }
        else if (pilih == 13) {
            cout << fixed << setprecision(5) << kartu_3 / set_bridge << endl;
        }
        else if (pilih == 14) {
            cout << fixed << setprecision(5) << kartu_4 / set_bridge << endl;
        }
        else if (pilih == 15) {
            cout << fixed << setprecision(5) << kartu_5 / set_bridge << endl;
        }
        else if (pilih == 16) {
            cout << fixed << setprecision(5) << kartu_6 / set_bridge << endl;
        }
        else if (pilih == 17) {
            cout << fixed << setprecision(5) << kartu_7 / set_bridge << endl;
        }
        else if (pilih == 18) {
            cout << fixed << setprecision(5) << kartu_8 / set_bridge << endl;
        }
        else {
            cout << "===|| Masukkan Nomor yang disediakan ||===" << endl;
        }

        bool quitQuestion;
        do {
            cout << "" << endl;
            cout << "Mencoba Lagi (1 = ya, 2 = tidak) = ";
            cin >> kondisi;
            if (kondisi == '1') {
                quit = false;
                quitQuestion = true;
                system("CLS");
            }
            else if (kondisi == '2') {
                quit = true;
                quitQuestion = true;
            }
            else {
                cout << "Input salah\n";
                quitQuestion = false;
            }
        } while (!quitQuestion);
    } while (!quit);

    system("pause");
    return 0;
}
    

