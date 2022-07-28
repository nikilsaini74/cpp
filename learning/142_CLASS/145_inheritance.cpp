// inheritance is done to access attributes of base class and can add additiona features as well

#include <iostream>
using namespace std;
class YoutubeChannel
{
private:
    string Name;
    int subscribersCount;

protected: // it is done to access it under derived class
    string OwnerName;

public:
    YoutubeChannel(string name, string ownername)
    {
        Name = name;
        OwnerName = ownername;
    }
    void getinfo()
    {
        cout << "Name = " << Name;
        cout << "Owner Name = " << OwnerName;
    }
    void sub()
    {
        subscribersCount++;
    }
    void unsub()
    {
        if (subscribersCount > 0)
            subscribersCount--;
    }
};
class CookingYT : public YoutubeChannel // inherit
{
    CookingYT(string name, string ownername) : YoutubeChannel(name, ownername)
    {
    }
    void practice()
    {
        cout << OwnerName << "is practicing" << endl;
    }
};
int main()
{
    CookingYT cooking1("ABC Kitchen", "ABC");
    CookingYT cooking2("XYZ Kitchen", "XYZ");
    cooking1.sub();
    cooking1.getinfo();
    cooking2.getinfo();

    return 0;
}