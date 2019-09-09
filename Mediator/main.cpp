#include "Colleague.h"
#include "Mediator.h"

int main() {
	ConcreteColleague Tom("Tom", "I'm in the canteen.");
	ConcreteColleague Jerry("Jerry", "I'm in the office.");
	ConcreteColleague Catherine("Catherine", "I'm in the meeting room.");
	ConcreteMediator amediator;
	amediator.registerColleague(&Tom);
	amediator.registerColleague(&Jerry);
	amediator.registerColleague(&Catherine);

	amediator.broadCast(&Tom);
	amediator.broadCast(&Jerry);
	amediator.broadCast(&Catherine);

	return 0;
}