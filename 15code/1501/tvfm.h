#ifndef TVFM_H_
#define TVFM_H_

class Tv;

class Remote{
    public:
        enum State{off, on};
        enum {MinVal, MaxVal = 20};
        enum {Antenna, Cable};
        enum {TV, DVD};
    private:
        int mode;
    public:
        Remote(int m = TV) : mode(m){}
        bool volup(Tv & t);
        bool voldowm(Tv & t);
        void onoff(Tv & t);
        void chanup(Tv & t);
        void chandowm(Tv & t);
        void set_mode(Tv & t);
        void set_input(Tv & t);
        void set_chan(Tv & t, int c);
};

class Tv
{
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    friend void Remote::set_chan(Tv & t, int c);
    enum State{off, on};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv(int s = off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV){}

    void onoff(){
        state = (state == on)? off : on;
    }
    bool ison() const {
        return state == on;
    }
    bool volup();
    bool voldowm();
    void chanup();
    void chandowm();
    void set_mode(){mode = (mode == Antenna)? Cable : Antenna; }
    void set_input(){input = (input == TV)? DVD : TV; }
    void settings() const;
};


inline bool Remote::volup(Tv & t){
    return t.volup();
}
inline bool Remote::voldowm(Tv & t){
    return t.voldowm();
}
inline void Remote::onoff(Tv & t){
    t.onoff();
}
inline void Remote::chanup(Tv & t){
    t.chanup();
}
inline void Remote::chandowm(Tv & t){
    t.chandowm();
}
inline void Remote::set_mode(Tv & t){
    t.set_mode();
}
inline void Remote::set_input(Tv & t){
    t.set_input();
}
inline void Remote::set_chan(Tv & t, int c){
    t.channel = c;
}


#endif