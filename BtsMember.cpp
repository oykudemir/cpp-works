#include <iostream>;
#include <string>;

using namespace std;

/* This class is a representation of Bts Members*/
class BtsMember{

    public:

        BtsMember()
        {
            memberNo = 0;
            name = "";
        }

        BtsMember(string nam, int memberN)
        {
            name = nam;
            memberNo = memberN;
        }

        int getMemberNo()
        {
            return memberNo;
        }

        void setMemberNo(int memNo)
        {
            memberNo = memNo;
        }

        void setName(string nName)
        {
            name = nName;
        }

        string getMemberName(int memNo)
        {
            switch(memNo){

            case 1: return "RM"; break;
            case 2: return "V"; break;
            case 3: return "Jungkook";  break;
            case 4: return "Suga"; break;
            case 5: return "J-Hope";break;
            case 6: return "Jin";   break;
            case 7: return "Jimin"; break;  
            default: return "Your input isn't valid.";
            }
        }



        //Prints out a different line for each BTS member.
        void talk()
        {
            cout << "Annyeonghaseyo! I am " << name << endl;
        }





    private:

        int memberNo;
        string name;

};

int main()
{
    BtsMember taehyung;
    taehyung.setMemberNo(2);
    taehyung.setName("Taehyung");
    taehyung.talk();
}

