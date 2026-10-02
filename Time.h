class Time{

	private:

		int hour;

		int min;

	public: 

		Time();//constructeur par defaut

		Time(int h,int m);//constructeur d'initialisation d'heure

		Time(int d);//constructeur d'initialisation de durée

		Time(const Time& t);//constructeur de copie

		~Time();//destructeur

		void setHour(int h);

		void setMinute(int m);

		int getHour()const;

		int getMinute()const;

		void display()const;
};