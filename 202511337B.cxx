#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void pause() {
//ask user togo back
    cout << "\nPress Enter to go back...";
    cin.ignore();
    cin.get();
}

void historyChapter1() {
    cout << "\n--- Chapter 1: Origins of C++ ---" << endl;
    cout << "C++ was created by Bjarne Stroustrup at Bell Labs in 1979." << endl;
    cout << "It was originally called 'C with Classes'." << endl;
    cout << "In 1983 it was renamed to C++." << endl;
    pause();
}

void historyChapter2() {
    cout << "\n--- Chapter 2: Development & Standardization ---" << endl;
    cout << "1985 - First commercial release of C++." << endl;
    cout << "1998 - First international standard: C++98." << endl;
    cout << "This made C++ consistent across all compilers." << endl;
    pause();
}

void historyChapter3() {
    cout << "\n--- Chapter 3: Evolution of C++ ---" << endl;
    cout << "C++03 - Minor update." << endl;
    cout << "C++11 - Major update: auto, lambdas, nullptr." << endl;
    cout << "C++14 - Small improvements." << endl;
    cout << "C++17 - Filesystem, structured bindings." << endl;
    cout << "C++20 - Concepts, ranges, modules." << endl;
    pause();
}

void historyChapter4() {
    cout << "\n--- Chapter 4: C++ and Its Ancestors ---" << endl;
    cout << "Fortran & Algol 60 --> influenced early languages" << endl;
    cout << "BCPL & CPL         --> led to C language" << endl;
    cout << "C (1972)           --> base of C++" << endl;
    cout << "Simula 67          --> gave C++ OOP concepts" << endl;
    cout << "C with Classes     --> became C++ (1983)" << endl;
    pause();
}

void historyMenu() {
    int choice;
    do {
        cout << "\n===== HISTORY OF C++ =====" << endl;
        cout << "1. Origins of C++" << endl;
        cout << "2. Development & Standardization" << endl;
        cout << "3. Evolution of C++" << endl;
        cout << "4. C++ and Its Ancestors" << endl;
        cout << "0. Back" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: historyChapter1(); break;
            case 2: historyChapter2(); break;
            case 3: historyChapter3(); break;
            case 4: historyChapter4(); break;
            case 0: break;
            default: cout << "Invalid choice." << endl;
        }
    } while (choice != 0);
}

void learnDataTypes() {
    cout << "\n--- Data Types ---" << endl;
    cout << "int    - whole numbers (e.g. 5)" << endl;
    cout << "float  - decimal numbers (e.g. 3.14)" << endl;
    cout << "char   - single character (e.g. 'A')" << endl;
    cout << "bool   - true or false" << endl;
    cout << "string - text (e.g. \"Hello\")" << endl;
    pause();
}

void learnControlFlow() {
    cout << "\n--- Control Flow ---" << endl;
    cout << "if / else - runs code based on a condition." << endl;
    cout << "switch    - selects a case from many options." << endl;
    pause();
}

void learnLoops() {
    cout << "\n--- Loops ---" << endl;
    cout << "for loop   - runs a fixed number of times." << endl;
    cout << "while loop - runs while condition is true." << endl;
    cout << "do-while   - runs at least once." << endl;
    pause();
}

void learnArrays() {
    cout << "\n--- Arrays ---" << endl;
    cout << "Stores multiple values of the same type." << endl;
    cout << "Example: int numbers[5] = {1, 2, 3, 4, 5};" << endl;
    cout << "Access:  numbers[0] gives first element." << endl;
    pause();
}

void learnFileStreams() {
    cout << "\n--- File Streams ---" << endl;
    cout << "Used to read/write files in C++." << endl;
    cout << "ofstream - write to a file." << endl;
    cout << "ifstream - read from a file." << endl;

    string demoFile = "demo.txt";
    ofstream outFile(demoFile.c_str());
    outFile << "Hello from C++!" << endl;
    outFile.close();

    cout << "\nReading demo.txt:" << endl;
    ifstream inFile(demoFile.c_str());
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    pause();
}

void learnMenu() {
    int choice;
    do {
        cout << "\n===== LEARN ABOUT C++ =====" << endl;
        cout << "1. Data Types" << endl;
        cout << "2. Control Flow" << endl;
        cout << "3. Loops" << endl;
        cout << "4. Arrays" << endl;
        cout << "5. File Streams" << endl;
        cout << "0. Back" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: learnDataTypes(); break;
            case 2: learnControlFlow(); break;
            case 3: learnLoops(); break;
            case 4: learnArrays(); break;
            case 5: learnFileStreams(); break;
            case 0: break;
            default: cout << "Invalid choice." << endl;
        }
    } while (choice != 0);
}

int main() {
    int choice;

    cout << "===== FOUNDATIONS AND HISTORY OF C++ =====" << endl;

    do {
        cout << "\n===== MAIN MENU =====" << endl;
        cout << "1. History of C++" << endl;
        cout << "2. Learn About C++" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: historyMenu(); break;
            case 2: learnMenu(); break;
            case 3: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid choice." << endl;
        }
    } while (choice != 3);

    return 0;
}
