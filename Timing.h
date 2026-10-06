#include"time.h"

class Timing{

	private:

		string day;

		Time start;

		Time duration;

	public:

		Timing();

		Timing(string d, Time start, Time duration);;

		Timing(const Timing& t);

		~Timing();

		void setDay(string d);

		void setStart(const Time& t);

		void setDuration(const Time& t);

		string getDay() const;
		
		Time getStart() const;

		Time getDuration() const;

		void display()const;
};