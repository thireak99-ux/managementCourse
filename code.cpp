#include <bits/stdc++.h>
using namespace std;

int ids[10];
string titles[10];
int durations[10];
float prices[10];

int courseCount = 0;

int main()
{

    system("cls");

    while (true)
    {
        cout << "=========Management Course=========" << endl;
        cout << "\t 1. Create course " << endl;
        cout << "\t 2. Show All course " << endl;
        cout << "\t 3. Show course by id " << endl;
        cout << "\t 4. Updated Course by ID " << endl;
        cout << "\t 0. Exit" << endl;

        int opt;
        cout << "Please choose an option: ";
        cin >> opt;

        if (opt == 0)
        {
            return 0;
        }
        switch (opt)
        {

        case 1:
        {
            system("cls");
            cout << "===[[Course creation ]]======" << endl;
            string title;
            int duration;
            float price;

            cin.ignore();
            cout << "[+] Enter course title : ";
            getline(cin, title);

            cout << "[+] Enter course duration : ";
            cin >> duration;

            cout << "[+] Enter course price: ";
            cin >> price;

            ids[courseCount] = (courseCount + 1);
            titles[courseCount] = title;
            durations[courseCount] = duration;
            prices[courseCount] = price;

            courseCount++;
            break;
        }

        case 2:
        {
            system("cls");
            cout << left << setw(5) << "ID"
                 << setw(15) << "Title"
                 << setw(12) << "Duration"
                 << setw(10) << "Price" << endl;

            for (int i = 0; i < courseCount; i++)
            {
                cout << left << setw(5) << ids[i]
                     << setw(15) << titles[i]
                     << setw(12) << durations[i]
                     << setw(10) << prices[i] << endl;
            }

            system("pause");

            break;
        }

        case 3:
        {

            system("cls");

            int searchId;
            cout << "Enter Course ID : ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < courseCount; i++)
            {
                if (ids[i] == searchId)
                {
                    cout << left << setw(5) << "ID"
                         << setw(15) << "Title"
                         << setw(12) << "Duration"
                         << setw(10) << "Price" << endl;
                    cout << left << setw(5) << ids[i]
                         << setw(15) << titles[i]
                         << setw(12) << durations[i]
                         << setw(10) << prices[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Course not found!" << endl;
            }

            system("pause");
            break;
        }
        case 4:
        {

            system("cls");

            int searchId;
            cout << "Enter Course ID : ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < courseCount; i++)
            {

                if (ids[i] == searchId)
                {
                    cout << left << setw(5) << "ID"
                         << setw(15) << "Title"
                         << setw(12) << "Duration"
                         << setw(10) << "Price" << endl;
                    cout << left << setw(5) << ids[i]
                         << setw(15) << titles[i]
                         << setw(12) << durations[i]
                         << setw(10) << prices[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Course not found!" << endl;
            }

            system("pause");
            break;
        }
        default:
        {
            cout << "[+] Invalid option !!! " << endl;
            cout << "[+] Try again !!! " << endl;
            system("pause");
        }
        }
    }
}