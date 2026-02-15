#include <iostream>
using namespace std;

class CricketPlayer
{
    int runs;
    int matches;

public:
    string name;

    void set_player(string name, int runs, int matches);
    void get_player();
};

int main()
{
    CricketPlayer p;

    p.set_player("Sakib Al Hasan", 2500, 130);
    p.get_player();

    return 0;
}

void CricketPlayer::set_player(string name, int runs, int matches)
{
    this->name = name;
    this->runs = runs;
    this->matches = matches;
}

void CricketPlayer::get_player()
{
    cout << "Name    : " << this->name << endl;
    cout << "Runs    : " << this->runs << endl;
    cout << "Matches : " << this->matches << endl;
}
