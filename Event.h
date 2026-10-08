#include "Timing.h"


class Event
{
  private:

    int code;
    char* title;
    Timing* timing=nullptr;

  public:

    Event();

    Event(int c,const char* t,Timing p);

    Event(const Event& e);

    ~Event();
    
    void setTitle(const char* t);

    void setCode(int c);

    void setTiming(Timing p);

    const char* getTitle() const;

    int getCode() const;

    Timing getTiming()const;

    void display() const;
};