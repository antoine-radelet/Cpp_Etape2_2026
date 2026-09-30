class Time{

	private:

		int hous;

		int min;

	public: 

		Time();//constructeur par defaut

		Time(int h,int m);//constructeur d'initialisation

		Time(const Event& t);//constructeur de copie

		~Time();//destructeur

		void setHour(int h);

		void setMin(int m);

		int getHour()const;

		int getMin()const;

		void desplay(int h,int m)
};
