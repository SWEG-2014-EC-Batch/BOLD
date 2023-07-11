#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_RECORDS = 100;

struct Tool {
    int toolID;
    string name;
    int quantity;
    double cost;
};

void initializeFile();
void addTool();
void listTools();
void deleteTool();
void updateTool();
void displayMenu();

int main() {
    initializeFile();

    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character

        switch (choice) {
            case 1:
                addTool();
                break;
            case 2:
                listTools();
                break;
            case 3:
                deleteTool();
                break;
            case 4:
                updateTool();
                break;
            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

void initializeFile() {
    ofstream file("hardware.txt");
    if (!file) {
        cerr << "Error creating file: hardware.txt" << endl;
        exit(1);
    }
    file.close();
}

void addTool() {
    ofstream file("hardware.txt", ios::app);
    if (!file) {
        cerr << "Error opening file: hardware.txt" << endl;
        exit(1);
    }

    Tool newTool;
    cout << "Enter tool details:" << endl;
    cout << "Tool ID: ";
    cin >> newTool.toolID;
    cin.ignore(); // Ignore the newline character
    cout << "Name: ";
    getline(cin, newTool.name);
    cout << "Quantity: ";
    cin >> newTool.quantity;
    cout << "Cost: ";
    cin >> newTool.cost;

    file << newTool.toolID << "," << newTool.name << "," << newTool.quantity << "," << newTool.cost << endl;

    file.close();
}

void listTools() {
    ifstream file("hardware.txt");
    if (!file) {
        cerr << "Error opening file: hardware.txt" << endl;
        exit(1);
    }

    Tool currentTool;
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;

        getline(ss, token, ',');
        currentTool.toolID = stoi(token);

        getline(ss, token, ',');
        currentTool.name = token;

        getline(ss, token, ',');
        currentTool.quantity = stoi(token);

        getline(ss, token, ',');
        currentTool.cost = stod(token);

        cout << "Tool ID: " << currentTool.toolID << endl;
        cout << "Name: " << currentTool.name << endl;
        cout << "Quantity: " << currentTool.quantity << endl;
        cout << "Cost: " << currentTool.cost << endl;
        cout << "-------------------" << endl;
    }

    file.close();
}

void deleteTool() {
    ifstream file("hardware.txt");
    if (!file) {
        cerr << "Error opening file: hardware.txt" << endl;
        exit(1);
    }

    ofstream tempFile("temp.txt");
    if (!tempFile) {
        cerr << "Error creating file: temp.txt" << endl;
        exit(1);
    }

    int toolID;
    cout << "Enter the Tool ID to delete: ";
    cin >> toolID;

    Tool currentTool;
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;

        getline(ss, token, ',');
        currentTool.toolID = stoi(token);

        getline(ss, token, ',');
        currentTool.name = token;

        getline(ss, token, ',');
        currentTool.quantity = stoi(token);

        getline(ss, token, ',');
        currentTool.cost = stod(token);

        if (currentTool.toolID != toolID) {
            tempFile << currentTool.toolID << "," << currentTool.name << "," << currentTool.quantity << "," << currentTool.cost << endl;
        }
    }

    file.close();
    tempFile.close();

    remove("hardware.txt");
    rename("temp.txt", "hardware.txt");
}

void updateTool() {
    ifstream file("hardware.txt");
    if (!file) {
        cerr << "Error opening file: hardware.txt" << endl;
        exit(1);
    }

    ofstream tempFile("temp.txt");
    if (!tempFile) {
        cerr << "Error creating file: temp.txt" << endl;
        exit(1);
    }

    int toolID;
    cout << "Enter the Tool ID to update: ";
    cin >> toolID;

    Tool updatedTool;
    cout << "Enter updated tool details:" << endl;
    cout << "Name: ";
    cin.ignore(); // Ignore the newline character
    getline(cin, updatedTool.name);
    cout << "Quantity: ";
    cin >> updatedTool.quantity;
    cout << "Cost: ";
    cin >> updatedTool.cost;

    Tool currentTool;
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;

        getline(ss, token, ',');
        currentTool.toolID = stoi(token);

        getline(ss, token, ',');
        currentTool.name = token;

        getline(ss, token, ',');
        currentTool.quantity = stoi(token);

        getline(ss, token, ',');
        currentTool.cost = stod(token);

        if (currentTool.toolID == toolID) {
            tempFile << updatedTool.toolID << "," << updatedTool.name << "," << updatedTool.quantity << "," << updatedTool.cost << endl;
        } else {
            tempFile << currentTool.toolID << "," << currentTool.name << "," << currentTool.quantity << "," << currentTool.cost << endl;
        }
    }

    file.close();
    tempFile.close();

    remove("hardware.txt");
    rename("temp.txt", "hardware.txt");
}

void displayMenu() {
    cout << "Inventory Management System" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Add a new tool" << endl;
    cout << "2. List all tools" << endl;
    cout << "3. Delete a tool" << endl;
    cout << "4. Update a tool" << endl;
    cout << "5. Exit" << endl;
}
