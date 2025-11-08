#include <iostream>
using namespace std;

int main() {
    string nim;
    string pw;
    int attempts = 0;

    // login
    while (attempts < 3) {
    cout << "<<<SELMAAT DATANG DI SPADU>>>" << endl;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Pasword: ";
    cin >> pw;

    bool nimBenar = (nim == "123250219");
    bool pwBenar = (pw == "hafizharfandi");

    if (nimBenar && pwBenar) {
        cout << "Login Berhasil" << endl;
        break;
    } else {
        attempts++;
        cout << "NIM atau Pasword Salah, Coba Lagi sisa: " << (3 - attempts) << endl;
       }
    }
    if (attempts >= 3) {
        cout << "Terlalu banyak mencoba, Anda dipaksa keluar dari sistem" << endl;
    }

    // input nilai
    int kehadiran;
    float tugas1, tugas2, tugas3, tugas4;
    float kuis, uts, uas;

    cout << "<<<INPUT NILAI>>>" << endl;
    cout << "Masukkan Kehadiran: ";
    cin >> kehadiran;

    if (kehadiran >= 13) {
        cout << "Masukkan Nilai Tugas 1: ";
        cin >> tugas1;
        cout << "Masukkan Nilai Tugas 2: ";
        cin >> tugas2;
        cout << "Masukkan Nilai tugas 3: ";
        cin >> tugas3;
        cout << "Masukkan Nilai Tugas 4: ";
        cin >> tugas4;
        cout << "Masukkan Kuis: ";
        cin >> kuis;
        cout << "Masukkan UTS: ";
        cin >> uts;
        cout << "Masukkan UAS: ";
        cin >> uas;
    } else {
        cout << "Kehadiran Tidak cukup" << endl;
        cout << "Masukkan Nilai Tuags 1: ";
        cin >> tugas1;
        cout << "Masukkan Nilai Tugas 2: ";
        cin >> tugas2;
        cout << "Masukkan Nilai Tugas 3: ";
        cin >> tugas3;
        cout << "Masukkan Nilai Tugas 4: ";
        cin >> tugas4;
        cout << "masukkan Kuis: ";
        cin >> kuis;
        cout << "Masukkan UTS: ";
        cin >> uts;
        cout << "Input selesai, Tidak bisa ikut UAS" << endl;
    }
    // rumus lihat niali
    float r_tugas, p_kuis, p_uts, p_uas, total;
    r_tugas = (tugas1 + tugas2 + tugas3 + tugas4) / 4; // r = rata rata
    p_kuis = kuis * 0.2; // p = persenan
    p_uts = uts * 0.3;
    p_uas = uas * 0.35;
    total = (r_tugas * 0.15) + p_kuis + p_uts + p_uas;

    // lihat nilai
    cout << "<<<LIHAT NILAI>>>" << endl;
    cout << "Rata-rata Tugas: " << r_tugas << "%" << endl;
    cout << "Persenan Kuis: " << p_kuis << "%" << endl;
    cout << "Persenan UTS: " << p_uts << "%" << endl;
    cout << "Persenan UAS: " << p_uas << "%" << endl;
    cout << "Total Persenan: " << total << "%" << endl;

    // grade penilaiam
    if (total >= 85) {
        cout << "Nilai A" << endl;
    } else if (total >= 70) {
        cout << "Nilai B" << endl;
    } else if (total >= 60) {
        cout << "Nilai C" << endl;
    } else if (total >= 45) {
        cout << "Nilai D" << endl;
    } else if (total < 45) {
        cout << "Nilai E" << endl;
    }
    return 0;
}