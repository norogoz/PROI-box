#include <iostream>
#include "Box.h"

using namespace std;


int main()
{
    Box one;
    int choice = 0;
    int item = 0;
    Box *created = &one;

    cout << "Choose an action: " << endl;
    cout << "1. Put an item" << endl;
    cout << "2. Take an item" << endl;
    cout << "3. Clear the box" << endl;
    cout << "4. Create a new box" << endl;
    cout << "5. Change name of the box" << endl;

    cin >> choice;

    switch(choice)
    {
        case 1: cout << "Put in box: ";
                cin >> item;
                created->put(item);
                break;
        case 2: cout << "Taken: " << created->take() << endl; break;
        case 3: created->clean(); cout << "Done" << endl; break;
        case 4: created = new Box; break;
        case 5: cout << "New name: ";
                cin >> created->name;
                break;
        default: cout << "Error" << endl;
    }

    getchar();
    return 0;
}
