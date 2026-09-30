class Event
{
  private:

    int code;
    char* title;

  public:

    Event();

    Event(int c,const char* t);

    Event(const Event& e);

    ~Event();
    
    void setTitle(const char* t);

    void setCode(int c);

    const char* getTitle() const;

    int getCode() const;

    void display() const;
};