#include<bits/stdc++.h>

using namespace std;

class Report{
    private:
        string str;
    public:
        Report(const string & s) : str(s) {
            cout << str << " Object created! " << endl;
        }
        ~Report() {
            cout << str << " Object deleted! " << endl;
        }
        void comment() const {
            cout << str << endl;
        }
};

int main(){

    {
        auto_ptr<Report> ps (new Report("using auto_ptr"));
        ps->comment();
    }

    {
        shared_ptr<Report> ps (new Report("using shared_ptr"));
        ps->comment();
    }

    {
        unique_ptr<Report> ps (new Report("using unique_ptr"));
        ps->comment();
    }

    return 0;
}