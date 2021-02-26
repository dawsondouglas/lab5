#ifndef heart_code
#define heart_code

class Heart
{
    int rate;
public:
    Heart(int newRate);
    Heart();
    ~Heart();
    void setRate(int rate);
    int getRate();
    bool ok();
};

#endif


