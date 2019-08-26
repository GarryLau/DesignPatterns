#include "Observer.h"
#include "Subject.h"

int main(){
	ConcreteObserver observerA("observerA");
	ConcreteObserver observerB("observerB");
	ConcreteObserver observerC("observerC");

	ConcreteSubject subject;
	subject.subscribe(&observerA);
	subject.subscribe(&observerB);
	subject.subscribe(&observerC);

	subject.notify(subject.getName());
	subject.notify("Notify the 2nd time.");


	return 0;
}