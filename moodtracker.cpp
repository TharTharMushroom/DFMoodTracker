// Devin Flanders
// Mood Tracker
// 10/9/24
// Extra: I did 6 moods

//importing namespace std and iostream
#include <iostream>
using namespace std;
//main function
int main() {
    //variable x to be used in switch
    int x = 0;
    //List of choices
    cout << "How are you feeling?\n1) Happy\n2) Sad\n3) Angry\n4) Scared\n5) Sleepy\n6) Spooky\n";
    //variable x gets assigned by user
    cin >> x;
    //switch case using variable x
    switch(x){
        //different cases have different outputs
        case 1:
            cout << "That's great to hear!";
            break;
        case 2:
            cout << "I hope you feel better!";
            break;
        case 3:
            cout << "Woah, calm down!";
            break;
        case 4:
            cout << "You need to be brave!";
            break;
        case 5:
            cout << "Go to bed, you need it.";
            break;
        //Extra mood
        case 6:
            cout << "It's almost Halloween!";
            break;
        //default case activates if the user does not pick numbers 1-6
        default:
            cout << "That was not an option.";
    }
    return 0;
}
