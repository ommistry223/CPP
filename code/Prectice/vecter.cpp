#include<iostream>
#include<vector>
using namespace std;

class student {
    private:
        string name;
        int marks;

    public:
        student(string stdname, int stdmarks) {
            name = stdname;
            marks = stdmarks;
        }

        
        string getName() const
        {
            return name;
        }

        int getMarks() const 
        {
            return marks;
        }
};

void getdata(vector<student> &s) {
    cout << "Enter the number of students : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int marks;
        cout << "Enter student name and marks : ";
        cin >> name >> marks;
        s.push_back(student(name, marks));
    }
}

void display(vector<student> &s) {
    cout << "Student Name\tMarks\n";
    for (auto &i : s) {
        // Use getter functions to access private members
        cout << i.getName() << "\t" << i.getMarks() << endl;
    }
}

int main() {
    vector<student> s;
    getdata(s);
    display(s);

    return 0;
}
