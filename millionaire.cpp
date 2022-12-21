// Name: Tom Kwok Kei
//Student ID: 1155172220
//Email: 1155172220@link.cuhk.edu.hk

#include <iostream>
#include <random>
using namespace std;

int main()
{
    int seed;
    cout << "Enter seed: ";
    cin >> seed;

    mt19937 gen(seed);  // seed the generator
    uniform_int_distribution<> distr1(1, 100);
    uniform_int_distribution<> distr2(0, 3);  

    int q = 0;
    int k;
    int jump = 1;
    int withdraw = 1;
    int win = 0;
    while (q < 15) {
        int x = distr1(gen); //1st operand [1, 100]
        int y = distr1(gen); //2nd operand [1, 100]
        int o = distr2(gen); //choice of operator (+, -, *, /)
        int c = distr2(gen); //position of correct answer (A, B, C, D)

        int soln = 0;
        char op;
        switch (o) {
        case 0:
            soln = x + y;
            op = '+';
            break;
        case 1:
            soln = x - y;
            op = '-';
            break;
        case 2:
            soln = x * y;
            op = '*';
            break;
        case 3:
            soln = x / y;
            op = '/';
            break;
        }

        if (q + 1 == 1){
            cout << "Question " << q + 1 << " ($1000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                        cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }
            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 1000;
            }
            else if(ans == 'e' || ans == 'E') {
                jump = 0;
                win = 0;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }
            
            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $0!" << endl;
                break;
            }
        }
            
        if (q + 1 == 2){
            cout << "Question " << q + 1 << " ($2000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 2000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 1000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $0!" << endl;
                break;
            }
        }

        if (q + 1 == 3){
            cout << "Question " << q + 1 << " ($3000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 3000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 2000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $0!" << endl;
                break;
            }
        }

        if (q + 1 == 4){
            cout << "Question " << q + 1 << " ($4000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 4000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 3000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }
            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $0!" << endl;
                break;
            }
        }

        if (q + 1 == 5){
            cout << "Question " << q + 1 << " ($8000#):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 8000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 4000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $0!" << endl;
                break;
            }
        }

        if (q + 1 == 6){
            cout << "Question " << q + 1 << " ($10000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 10000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 8000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }
            else if ((ans != (65 + c) || ans != (97 + c)) && (jump == 0)) {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $0!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $8000!" << endl;
                break;
            }
        }

        if (q + 1 == 7){
            cout << "Question " << q + 1 << " ($20000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 20000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 10000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $8000!" << endl;
                break;
            }
        }

        if (q + 1 == 8){
            cout << "Question " << q + 1 << " ($30000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 30000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 20000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $8000!" << endl;
                break;
            }
        }

        if (q + 1 == 9){
            cout << "Question " << q + 1 << " ($40000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 40000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 30000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $8000!" << endl;
                break;
            }
        }

        if (q + 1 == 10){
            cout << "Question " << q + 1 << " ($60000#):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 60000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 40000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $8000!" << endl;
                break;
            }
        }

        if (q + 1 == 11){
            cout << "Question " << q + 1 << " ($80000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 80000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 60000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }
            else if ((ans != (65 + c) || ans != (97 + c)) && (jump == 0)) {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $8000!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $60000!" << endl;
                break;
            }
        }

        if (q + 1 == 12){
            cout << "Question " << q + 1 << " ($150000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 150000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 80000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $60000!" << endl;
                break;
            }
        }

        if (q + 1 == 13){
            cout << "Question " << q + 1 << " ($250000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 250000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 150000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $60000!" << endl;
                break;
            }
        }

        if (q + 1 == 14){
            cout << "Question " << q + 1 << " ($500000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                win = 500000;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
                win = 250000;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $60000!" << endl;
                break;
            }
        }

        if (q + 1 == 15){
            jump = 0;
            cout << "Question " << q + 1 << " ($1000000):" << endl;
            cout << x << " " << op << " " << y << " = ?" << endl;
            for (k = 0; k <= 3; k++) {
                char choice = 65 + k;
                cout << choice << ". ";
                if (k == c) {
                    cout << soln << "  ";
                }
                else {
                    int r;
                    do {
                        r = distr1(gen);
                    } while (r == soln);
                    cout << r << "  ";
                }
            }
            if (jump == 1) {
                cout << "E. Jump  ";
            }

            if (withdraw == 1) {
                cout << "F. Withdraw";
            }

            cout << "\nFinal answer: ";
            char ans;
            cin >> ans;
            if (ans == (65 + c) || ans == (97 + c)) {
                cout << "Right!" << endl;
                cout << "Game over!" << endl;
                cout << "You got $1000000!" << endl;
                cout << "Congrats! You are a millionaire!" << endl;
            }
            else if (ans == 'e' || ans == 'E') {
                jump = 0;
            }
            else if (ans == 'f' || ans == 'F') {
                cout << "Game over!" << "\nYou got $" << win << "!" << endl;
                break;
            }

            else {
                cout << "Wrong!" << "\nGame over!" << endl;
                cout << "You got $60000!" << endl;
                break;
            }
        }

        q++;
    }
    
}


/*
else if ((ans == 'f' || ans == 'F') && (jump == 0)) {
                cout << "Game over!" << "\nYou got $2000!" << endl;
                break;
            }
            else if (ans == 'f' || ans == 'F' && (jump == 1)) {
                cout << "Game over!" << "\nYou got $3000!" << endl;
                break;
            }
*/