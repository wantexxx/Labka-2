// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Recipe {
private:
    string name;
    int cookingTime;
public:
    Recipe() : name("Без назви"), cookingTime(0) {}

    Recipe(string n, int time) : name(n), cookingTime(time) {}

    Recipe(string n) : Recipe(n, 30) {}

    ~Recipe() {
        cout << "Рецепт " << name << "delite" << endl;
    }

    void showInfo() {
        cout << "Рецепт: " << name << ", Час приготування: " << cookingTime << " хв" << endl;
    }
};

class Ingredient {
private:
    string name;
    double quantity;
public:
    Ingredient() : name("Невідомий"), quantity(0.0) {}
    Ingredient(string n, double q) : name(n), quantity(q) {}
    Ingredient(string n) : Ingredient(n, 1.0) {}

    ~Ingredient() {
        cout << "Інгредієнт " << name << "delite" << endl;
    }

    void showInfo() {
        cout << "Інгредієнт: " << name << ", Кількість: " << quantity << endl;
    }
};

class Category {
private:
    string categoryName;
public:
    Category() : categoryName("Загальна") {}
    Category(string name) : categoryName(name) {}

    ~Category() {
        cout << "Категорія " << categoryName << "delite" << endl;
    }

    void showInfo() {
        cout << "Категорія: " << categoryName << endl;
    }
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251); 
    Recipe r1("Борщ", 90);
    r1.showInfo();

    Ingredient i1("Картопля", 3);
    i1.showInfo();

    Category c1("Перші страви");
    c1.showInfo();

    return 0;
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
