/*
320142
a5_1.cpp
Valentin Munteanu
v.munteanu@jacobs-university.de
*/

class Box{
	private:
		double height,width,depth;
	public:
		Box();
		Box(double, double, double);
		Box(const Box&);
		~Box();
		void setHeight(double newheight);
		void setWidth(double newwidth);
		void setDepth(double newDepth);
		double getHeight();
		double getWidth();
		double getDepth();
		double getVolume();
};
