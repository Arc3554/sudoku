#include <ctime>
using namespace std;
class Clock {
public:
	Clock() { setStart(0); }
	void start() {
		setStart(clock());
	}
	void setStart(clock_t ts) {
		start_ts = (ts > 0) ? ts : clock();
	}
	clock_t getStart() {
		return start_ts;
	}
	double getElapsedTime() {
		return static_cast<double>(clock() - getStart()) / CLOCKS_PER_SEC;
	}
private:
	clock_t start_ts;

};
