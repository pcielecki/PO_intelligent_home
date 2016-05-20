#define VERBOSITY 4


#if 4 == VERBOSITY
#include <iostream>
#endif


#include <string>
#include "../../../Incl/Utils/SH_exceptions.hpp"
#include "../../../Incl/Utils/Deserializers/CommandDeserializer.hpp"

using std::string;

void
CommandDeserializer::CheckForValidityAndFormat(string& line)
{
	this->CheckFormat(line);

	this->FormatLine(line);
}

void
CommandDeserializer::CheckFormat(const string& line)
{
	enum states{BEGINNING, PARAMS, END, ERROR};
	states state = BEGINNING;

	string::const_iterator it = line.begin();

	while(it != line.end())
	{

		switch(state)
		{
		case BEGINNING:
			if				('(' == *it)	state = PARAMS;
			break;

		case PARAMS:
			if				('(' == *it)	state = ERROR;
			else if			(')' == *it)	state = END;
			break;
		case END:
			if				('\0' != *it) state = ERROR;
			break;
		default:
			break;
		}
	}

	if(END != state)
		throw new SH_Exceptions::NotSupportedException(line);
}

void
CommandDeserializer::FormatLine(string& command)
{
	char space = ' ';
	size_t begbrace = command.find("(");
	command.at(begbrace) = space;

	size_t endbrace = command.find(")");
	command.at(endbrace) = space;

#if 4 <= VERBOSITY
	std::cout << "Command fine. Formatted to: \n" << command << std::endl;
#endif
}

string
CommandDeserializer::ExtractCommandName(string& serializedData)
{
	this->content_ID = NAME;

	return ExtractContent(serializedData);
}

string
CommandDeserializer::ExtractContent(string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, this->content_ID);


	string content 		= serialized_data.substr(
					this->ContentBeginningIndex,
					this->ContentLength
					);


	string serialized_data1 	=	serialized_data.substr(
					0,
					this->ContentBeginningIndex
			);


	string serialized_data2 =		serialized_data.substr(
				this->ContentEndIndex,
				-1
			);

#if 4 == VERBOSITY

	std::cout << "Content " << content << " extracted. Line left:" << serialized_data << std::endl;
#endif

	return content;
}

string
CommandDeserializer::deserialize(const string& serializedData)
{
	this->content_ID = NAME;

	Deserializer::GetContentIndexes(serializedData, this->content_ID);

	string datatype 	= serializedData.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return datatype;



}
