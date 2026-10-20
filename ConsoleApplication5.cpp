#include <iostream>
#include <vector>
#include <clocale>
using namespace std;

struct go
{
    string room;
    string room2;
    string room3;

};

struct house
{
    int nam;
    string room;
    vector<string> nextroom;
    vector<string> back;
    vector<string> items;

};

struct player
{
    vector<string> items;

};

vector<house> myrooms = {
{ 0," спальня  ",{ { " прихожая " } },{ "" } },
{ 1," прихожая ",{ { " зал " },{ " коридор " } },{ " спальня \n" } },
{ 2," зал ",{ { " балкон " } },{ " прихожая \n" } },
{ 3," коридор  ",{ { " кухня   " },{ " туалет " },{ " ванная " } },{ " прихожая \n" } },
{ 4," кухня    ",{},{ " коридор \n" } },
{ 5," туалет   ",{},{ " коридор \n" } },
{ 6," ванная   ",{},{ " коридор \n" } },
{ 7," балкон   ",{},{ " зал \n" } }

};

int main()
{
    setlocale(LC_ALL, "Russian");

    int i = 0;

    const house& a = myrooms[i];
    cout << a.nam;
}