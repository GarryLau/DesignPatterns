#pragma once

#include <vector>

#ifdef __cplusplus
extern "C" {
#endif

	class IColleague;

	class IMediator
	{
	public:
		~IMediator() {}
		virtual void registerColleague(IColleague *colleague) = 0;
		virtual void broadCast(IColleague *colleague) = 0;
	protected:
		std::vector<IColleague *> m_colleague;
	};

	class ConcreteMediator : public IMediator
	{
	public:
		void registerColleague(IColleague *colleague) override {
			m_colleague.push_back(colleague);
		}
		void broadCast(IColleague *sender) override;
	};

#ifdef __cplusplus
}
#endif