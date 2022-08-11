#include <iostream>
#include <string>
using namespace std;
class Str
{
private:
	string word;
public:
    Str()
    {
    }
    Str(string n)
    {
        word = n;
    }
    void Show() {
        cout << word << "\n";
    }
    Str operator*(const Str& N)
    {
        Str temp;
        if (word.size() < N.word.size())
        {
            for (size_t i = 0; i < word.size(); i++)
            {
                for (size_t j = 0; j < N.word.size(); j++)
                {
                    if (word[i] == N.word[j])
                    {
                        temp.word += word[i];
                    }
                }
            }
        }
        else
        {
            for (size_t i = 0; i < N.word.size(); i++)
            {
                for (size_t j = 0; j < word.size(); j++)
                {
                    if (N.word[i] == word[j])
                    {
                        temp.word += N.word[i];
                    }
                }
            }
        }
        return temp;
    }

};
int main()
{
    Str A("gkifor");
    Str B("gefdts");
    Str C;
    C = A * B;
    C.Show();
    exit(0);
}