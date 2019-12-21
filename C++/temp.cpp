#include <sstream>
#include <fstream>
#include <iostream>
#include <unistd.h>
#include <tuple>
#include <set>
#include <vector>
// #include <utility>
using namespace std;

int temp = 0;

bool comp(int i) {
    return i > temp;
}

void show_state_bits(stringstream *ss) {
    cout << (*ss).good() << (*ss).fail() << (*ss).eof() << (*ss).bad() << endl;
    return;
}

int getInteger() {
    while (true) {
        string line; int result; char trash;
        if (!(getline(cin, line))) throw domain_error("Can't scan a line");
        istringstream iss(line);
        if ((iss >> result) && (!(iss >> trash))) return result;
    }
}

auto inc(const int& i) {
    return static_cast<int> (1.6);
}

string getRandomWord() { 
    string word = "COMPUTER";
  return word;
}

struct Time {
    int hour;
    int minute;
};

struct range {
    Time min;
    Time max;
};

void inc(range& r) {
    r.min.hour++;
    r.max.hour++;
}

auto playAuto(int x) {
    if (x==1) {
        return make_pair(2,1);
    }
    return make_pair(1,2);
}

enum DayOfWeek {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

ostream& operator<<(ostream& os, const Time& time) {
    os << right << setfill('0') << setw(2) << time.hour << ":" << setfill('0') << setw(2) << time.minute; 
    return os;
}

istream& operator>>(istream& is, Time& time) {
    if (!is) return is;     // If state is fail do nothing.

    string timeString;
    is >> timeString;
    istringstream iss(timeString);
    int hour, minute; char colon;
    if (iss >> hour >> colon >> minute)
    {
        time.hour = hour;
        time.minute = minute;
        return is;
    } else {
        is.setstate(ios::failbit);
        return is;
    }
    
    return is;
}

int main() {
    // using x = stringstream;
    // x ss("\n\n\n\n");
    // auto i = 5;
    // auto [_, y] = make_tuple(true, false);
    // cout << _  << endl;

    // int a = 5;
    // auto b = a;
    // range rr{{1,1}, {2,2}};
    // inc(rr);
    // cout << rr.min.hour << " " << rr.max.hour << endl;
    // auto [f,s] = playAuto(1);
    // cout << "\n\n\n" << f << s <<endl;
    // // a++;
    // // b++;
    // // cout << getRandomWord() <<endl;
    // // cout<<i<<endl;
    // // inc(i);
    // // auto i = "Hi";
    // // cout<<inc(i)<<endl;
    // // oss << 1.6;
    // // oss.seekp(oss.tellp() + streamoff(5));
    // // int n = getInteger();
    // // cout<<ss.str;
    // DayOfWeek day = Friday;
    // cout << day <<endl;

    // cout << true << false << boolalpha <<endl;

    // ifstream iff("temp.cpp");
    // char line;
    // int count = 0;
    // while(iff >> line) {
    //     count++;
    //     cout << line << endl;
    // }
    // cout << count << endl;
    // cout << setw(20) << left << "- [ " << left << setw(5) << setfill('-') << "Hi" << "Hello" << "]\n";

    // Time t{5,9};
    // cout << t <<endl;
    // cin >> t;
    // cout<< cin.fail() <<endl;

    // std::vector<long> sset{2,3,8,8,19,57};
    // auto start = lower_bound(sset.begin(), sset.end(), 90);
    // vector<long>::iterator end = upper_bound(sset.begin(), sset.end(), 70);
    // long c = std::distance(start, end);
    // cout << c << " " << (start==sset.end()) << " " << *(++start) << " " << *end << " " << *(++end) << " " <<endl;

    int x;
    cin >> temp >> x;
    cout << comp(x) << endl;
    cin >> temp >> x;
    cout << comp(x) << endl;

    return 0;
}




/*





*/
