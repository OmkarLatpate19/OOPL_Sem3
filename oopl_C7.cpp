/*Write a program in C++ to use map associative container.
The keys will be the names of states and the values will be the populations of the states.
When the program runs, the user is prompted to type the name of a state.
The program then looks in the map, using the state name as an index and returns the population of the state.*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

class State
{
public:
    string state;
    map<string, string> m;
    map<string, string>::iterator itr;

    void setData()
    {
        m["Uttar Pradesh"] = "24 Crore";
        m["Maharashtra"] = "12 Crore";
        m["Bihar"] = "11 Crore";
        m["West Bengal"] = "10 Crore";
        m["Tamilnadu"] = "9 Crore";
        m["Karnataka"] = "8 Crore";
        m["Gujrat"] = "6 Crore";
        m["Goa"] = "1 Crore";
    }

    void displayData()
    {
        for (itr = m.begin(); itr != m.end(); itr++)
        {
            cout << "States registered are :"<< itr->first << endl;
        }
        cout << endl;
    }

    void searchData()
    {
        cout << "Enter state name you want to search :";
        cin >> state;
        if (m.count(state) != 0)
        {
            itr=m.find(state);
            cout << "Population of  " << state << " is " << itr->second << endl;
        }
        else
        {
            cout << "State not found !!" << endl;
        }
    }
};

int main()
{
    State s;
    int ch;
    bool flag = true;

    while (flag)
    {
        cout << "\n1.Set States\n2.Display States\n3.Search State\n4.Exit" << endl;
        cout << "Enter choice :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            s.setData();
            cout<<"States information added successfuly !!!"<<endl;
            break;

        case 2:
            s.displayData();
            break;

        case 3:
            s.searchData();
            break;

        case 4:
            flag = false;
            cout << "Exitting Program !!" << endl;
            break;
        }
    }
    return 0;
}