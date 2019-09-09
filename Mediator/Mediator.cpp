#include "Mediator.h"
#include "Colleague.h"

void ConcreteMediator::broadCast(IColleague *sender) {
	for (auto it = m_colleague.begin(); it != m_colleague.end(); ++it)
	{
		if (*it != sender)    // 不需要通知自己
		{
			(*it)->receiveMessage(sender);
		}
	}
	std::cout << "--------------------------------" << std::endl;
}