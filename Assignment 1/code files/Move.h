#include <string>

class Move{

private:
	double x,y;

public:
	//constructor
	Move( double a=0, double b=0){
		x = a;
		y = b;
	}
	
	//extras
	void showMove() const;
	Move add( const Move &m);
	void reset(double g, double h=0);
};