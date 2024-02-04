#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int MAX_TASKS = 10;
    string todoList[MAX_TASKS];
    int Tasks = 0;
    cout << "Welcome to the To-Do List!" << endl;

    while (true) {
        cout << "\n1. Add Task\n2. View Tasks\n3. Quit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (Tasks < MAX_TASKS) {
                    cout << "Enter the task to add: ";
                    cin.ignore(); 
                    getline(cin, todoList[Tasks]);
                    Tasks++;
                    cout << "Task added!" << endl;
                } else {
                    cout << "To-Do List is full! Cannot add more tasks." << endl;
                }
                break;
            case 2:
                if (Tasks == 0) {
                    cout << "No tasks in the list." << endl;
                } else {
                    cout << "Tasks in the list:" << endl;
                    for (int i = 0; i < Tasks; ++i) {
                        cout << i + 1 << ". " << todoList[i] << endl;
                    }
                }
                break;
            case 3:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
