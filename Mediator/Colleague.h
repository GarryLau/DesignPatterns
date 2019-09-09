#pragma once

#include <string>
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

	class IMediator;

	class IColleague
	{
	public:
		IColleague(std::string name, std::string message) : m_name(name), m_message(message) {}

		~IColleague() {}

		virtual void sendMessage(IMediator * mediator) = 0;

		virtual void receiveMessage(IColleague * sender) = 0;

		std::string getName() {
			return m_name;
		}

		std::string getMessage() {
			return m_message;
		}

		std::string setMessage(std::string message) {
			m_message = message;
		}
	protected:
		std::string m_name;
		std::string m_message;
	};

	class ConcreteColleague : public IColleague
	{
	public:
		ConcreteColleague(std::string name, std::string message) : IColleague(name, message){}

		virtual void sendMessage(IMediator * mediator) override;

		virtual void receiveMessage(IColleague * sender) override {
			std::cout << m_name << " get the message --> " << sender->getMessage() << ", from " << sender->getName() << std::endl;
		}
	};

#ifdef __cplusplus
}
#endif