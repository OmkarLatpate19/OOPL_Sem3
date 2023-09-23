#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Data
{
public:
    string name;
    string roll_no;
    string dob;
    string mob_no;

    void set_data()
    {
        cout << "Enter Name, Roll no, DOB and Mob no of person : ";
        cin >> name >> roll_no >> dob >> mob_no;
    }

    void read_data()
    {
        cout << name << "\t" << roll_no << "\t" << dob << "\t" << mob_no << endl;
    }
};

int main()
{

    int n, ch, ans;
    int i;
    string key;
    cout << "Enter the number of students in class :";
    cin >> n;
    vector<Data> v(n);
    vector<string> Name(n);
    vector<string> Roll(n);

    do
    {
        cout << "******MENU******" << endl;
        cout << "1.Write Data " << endl;
        cout << "2.Display Data " << endl;
        cout << "3.Sort Data " << endl;
        cout << "4.Search your data " << endl;
        cout << "****************" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                v[i].set_data();
            }
            break;

        case 2:
            cout << "Name"<< "\t"<< "RollNo" << "\t" << "DOB" << "\t\t" << "MobNo" << endl;
            for (int i = 0; i < n; i++)
            {
                v[i].read_data();
            }
            break;

        case 3:
            cout << "\nSorting Students according to their roll number\n"<< endl;
            for (int i = 0; i < n; i++)
            {
                Roll[i] = v[i].roll_no;
            }
            sort(Roll.begin(), Roll.end());
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (Roll[i] == v[j].roll_no)
                    {
                        v[j].read_data();
                    }
                }
            }
            break;

        case 4:
            for (int i = 0; i < n; i++)
            {
                Name.push_back(v[i].name);
            }
            sort(Name.begin(), Name.end());

            cout << "Enter the name you want to search : ";
            cin >> key;
            if (binary_search(Name.begin(), Name.end(), key))
            {
                cout << "Present in the data " << endl;
            }

            else
            {
                cout << "Not present in the data " << endl;
            }
            break;

        default:
            cout << "\n You have entered a wrong choice " << endl;
            break;
        }
        cout << "\n Do you want to continue?" << endl;
        cout << "1.Yes \n 2.No" << endl;
        cin >> ans;
    } while (ans == 1);

    if (ans >= 2)
        cout << "Exitting program !!" << endl;
    return 0;
}
