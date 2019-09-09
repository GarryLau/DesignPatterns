#include "Mediator.h"
#include "Colleague.h"

 void ConcreteColleague::sendMessage(IMediator * mediator) {
	mediator->broadCast(this);
}