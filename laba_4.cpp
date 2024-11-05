#include <iostream>
#include <string>

using namespace std;

class Addressa //Оголошення классу
{
private /*Дозволяє зберігати данні*/:
    string name;
    string street;
    int housenumber;

public:
    // Конструктор параметрів за замовчуванням (дозволяє створювати об'єкти класу)
    Addressa(string _name = "", string _street = "", int _housenumber = 0)
    {
        name = _name;
        street = _street;
        housenumber = _housenumber;
    }

    // дозволяє встановлювати значеня
    void setAddressa(string _name, string _street, int _housenumber)
    {
        name = _name;
        street = _street;
        housenumber = _housenumber;
    }

    // Дозволяє вводити свої данні
    void inputAddressa() {
        cout << "Введіть ім'я: \n";
        getline(cin, name);
        cout << "Введіть вулицю: \n";
        getline(cin, street);
        cout << "Введіть номер будинку: \n";
        cin >> housenumber;
        cin.ignore(); // Очищує після вводу числа
    }

    // Показує данні на екрані
    void printAddressa()
    {
        cout << "Ім'я: " << name << ", Вулиця: " << street << ", Номер будинку: " << housenumber << endl;
    }
};

int main() // Основна функція
{
    // Створює два класа із різнмими іменами і данними
    Addressa Oleg_1("Oleg :)", "Шевченка", 6);
    Addressa Oleg_2("Oleg :(", "Сембратовича", 8);
    Addressa user; // Особисті данні 

    // Показ данних на екрані
    Oleg_1.printAddressa();
    Oleg_2.printAddressa();

    // Показ данних на екрані 
    user.inputAddressa();
    user.printAddressa();

    return 0;
}
