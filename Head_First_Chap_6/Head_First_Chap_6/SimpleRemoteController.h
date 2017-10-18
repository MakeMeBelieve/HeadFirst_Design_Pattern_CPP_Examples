#pragma once
class SimpleRemoteController
{
public:
	SimpleRemoteController();
	void setCommand(Command *command);
	void buttonWasPressed();
private:
	Command *slot;
};

