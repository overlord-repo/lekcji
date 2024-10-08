#include <iostream>
#include <string>
using namespace std;

// Function declarations
float oblicz_BMI(float, float);
string interpretuj_BMI_s(float);

int main() {
    float dwaga; // Waga
    float dwzrost; // Wzrost
    float BMI; // Indeks masy ciała

    cout << "Wpisz wagę KG: \n";
    cin >> dwaga; // Użyj cin do wczytywania liczby
    cout << "Wpisz wzrost M: \n";
    cin >> dwzrost; // Użyj cin do wczytywania liczby

    cout << "Podałeś: " << dwaga << " KG, " << dwzrost << " M" << endl;

    // Obliczanie BMI
    if (dwaga > 0 && dwzrost > 0) {
        BMI = oblicz_BMI(dwaga, dwzrost); // Wywołanie funkcji
        string komunikat = interpretuj_BMI_s(BMI); // Zmiana lokalna
        cout << "Twoje BMI to: " << BMI << " - " << komunikat << endl;
    } else {
        cout << "ŻLE: Wartości muszą być większe od zera i odpowiedz nie może zawierać NIE liczby" << endl;
    }
    return 0;
}

// Function definitions
float oblicz_BMI(float dwaga, float dwzrost) {
    return dwaga / (dwzrost * dwzrost);
}

string interpretuj_BMI_s(float BMI) {
    if (BMI < 16) {
        return "Wygłodzenie";
    } else if (BMI < 17) {
        return "Wychudzenie";
    } else if (BMI < 18.5) {
        return "Niedowaga";
    } else if (BMI < 25) {
        return "Waga prawidłowa";
    } else if (BMI < 30) {
        return "Nadwaga";
    } else if (BMI < 35) {
        return "Pierwszy stopień otyłości";
    } else if (BMI < 40) {
        return "Drugi stopień otyłości";
    } else {
        return "Trzeci stopień otyłości";
    }
}
