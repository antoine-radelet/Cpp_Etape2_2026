#include "Timing.h"

namespace planning{
class Event
{
  private:

    int code;
    string title;
    Timing* timing;

  public:

    static int currentCode; 

    Event();

    Event(int c,const string t );

    Event(int c,const string t,const Timing& p);

    Event(const Event& e);

    ~Event();
    
    void setTitle(const string t);

    void setCode(int c);

    void setTiming(const Timing& p);

    const string getTitle() const;

    int getCode() const;

    const Timing& getTiming()const;

    void display() const;
};

}//end namespace 