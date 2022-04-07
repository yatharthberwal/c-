#include <bits/stdc++.h>
using namespace std;
char templateStr[10];
void wrongInputHandle(int, int);
void getline(string &n);
class Staff
{
    int code;
    string name;

public:
    Staff(int code, string name)
    {
        this->code = code;
        this->name = name;
    }
    void display()
    {
        cout << "\nCode\t\t\t:\t\t\t" << code;
        cout << "\nName\t\t\t:\t\t\t" << name;
    }
};

class Teacher : public Staff
{
    string subject, department;

public:
    Teacher(int code, string name, string subject, string department) : Staff(code, name)
    {
        this->subject = subject;
        this->department = department;
    }
    void displayTeacher()
    {
        Staff::display();
        cout << "\nSubject\t\t\t:\t\t\t" << subject;
        cout << "\nPublication\t\t:\t\t\t" << department << endl;
    }
};
class Officer : public Staff
{
    char grade;

public:
    Officer(int code, string name, char grade) : Staff(code, name)
    {
        this->grade = grade;
    }
    void displayOfficer()
    {
        Staff::display();
        cout << "\nGrade\t\t\t:\t\t\t" << grade << endl;
    }
};
class Worker : public Staff
{
    int id;

public:
    Worker(int code, string name, int id) : Staff(code, name)
    {
        this->id = id;
    }
    void displayWorker()
    {
        Staff::display();
        cout << "\nID\t\t:\t\t\t" << id << endl;
    }
};
vector<Teacher *> teachers;
vector<Officer *> officers;
vector<Worker *> Workers;

void displayMainMenu()
{
    cout << endl<< templateStr << "MANIPAL UNIVERSITY JAIPUR" << templateStr << endl;   
    cout << "\nChoose Category: \n";
    cout << "1)\tTeacher\n";
    cout << "2)\tOfficer\n";
    cout << "3)\tWorker\n";
    cout << "4)\tExit\n";
    cout << "Choose one from above menu: ";
}
void displayHelper()
{
    cout << "\nChoose Category: \n";
    cout << "1)\tCreate\n";
    cout << "2)\tDisplay\n";
    cout << "3)\tMain Menu\n";
}
void displayTeacherMenu()
{
    cout << endl << templateStr << "Teacher Section" << templateStr << "\n";
    displayHelper();
    cout << "Choose one from above menu: ";
}
void displayOfficerMenu()
{
    cout << endl << templateStr << "Officer Section" << templateStr << endl;
    displayHelper();
    cout << "Choose one from above menu: ";
}
void displayWorkerMenu()
{
    cout << endl << templateStr << "workers Section" << templateStr << endl;
    displayHelper();
    cout << "Choose one from above menu: ";
}
pair<string, int> generalInput()
{
    string name;
    int code;
    cout << "\nEnter Name\t\t\t:\t\t\t";
    getline(name);
    cout << "Enter Code\t\t\t:\t\t\t";
    cin >> code;
    return make_pair(name, code);
}
void takeTeacherInput()
{
    string subject, department;
    pair<string, int> newInput = generalInput();
    cout << "Enter Subject\t\t\t:\t\t\t";
    getline(subject);
    cout << "Enter department\t\t:\t\t\t";
    getline(department);
    teachers.push_back(new Teacher(newInput.second, newInput.first, subject, department));
}

void takeOfficerInput()
{
    pair<string, int> newInput = generalInput();
    char grade;
    cout << "Enter grade\t\t\t:\t\t\t";
    cin >> grade;
    officers.push_back(new Officer(newInput.second, newInput.first, grade));
};
void takeWorkerInput()
{
    pair<string, int> newInput = generalInput();
    int id;
    cout << "Enter ID\t\t:\t\t\t";
    cin >> id;
    Workers.push_back(new Worker(newInput.second, newInput.first, id));
}
void handleMenu2(int option)
{
    int option2;
    cin >> option2;
    switch (option2)
    {
    case 1:
        switch (option)
        {
        case 1:
            takeTeacherInput();
            break;
        case 2:
            takeOfficerInput();
            break;
        case 3:
            takeWorkerInput();
            break;
        default:
            wrongInputHandle(2, option);
            break;
        }
        break;
    case 2:
        switch (option)
        {
        case 1:
            cout << templateStr << "All Teacher" << templateStr << endl;
            for (auto &x : teachers)
            {
                x->displayTeacher();
            }
            break;
        case 2:
            cout << templateStr << "All Officers" << templateStr << endl;
            for (auto &x : officers)
            {
                x->displayOfficer();
            }

            break;
        case 3:
            cout << templateStr << "All Worker" << templateStr << endl;
            for (auto &x : Workers)
            {
                x->displayWorker();
            }
            break;
        default:
            wrongInputHandle(2, option);
            break;
        }
        break;
    case 3:
        return;
        break;
    default:
        wrongInputHandle(2, option);
        break;
    }
}
void wrongInputHandle(int flagNumber, int option)
{
    cout << "Choose valid option from above menu:";
    if (flagNumber == 2)
    {
        handleMenu2(option);
    }
}
void getline(string &n)
{
    char str[100];
    cin.clear();
    fflush(stdin);
    cin.getline(str, 100);
    n = str;
    return;
}
int main()
{
    memset(templateStr, '*', 9);
    int option = -1, option2;
    while (true)
    {
        displayMainMenu();
        cin >> option;
        switch (option)
        {
        case 1:
            displayTeacherMenu();
            handleMenu2(option);
            break;
        case 2:
            displayOfficerMenu();
            handleMenu2(option);
            break;
        case 3:
            displayWorkerMenu();
            handleMenu2(option);
            break;
        case 4:
            return 0;
        default:
            wrongInputHandle(1, -1);
            break;
        }
    }
}