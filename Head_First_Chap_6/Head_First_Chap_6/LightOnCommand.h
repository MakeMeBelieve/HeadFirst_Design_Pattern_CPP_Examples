#pragma once
class LightOnCommand: public Command
{
public:
	LightOnCommand(Light *light);
	void execute();
private:
	Light *light;
};

