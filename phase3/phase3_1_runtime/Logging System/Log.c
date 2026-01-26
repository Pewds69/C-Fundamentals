#include<stdio.h>
#include"Log.h"

static void LogMessage(enum LogSeverity s, const char* message);
static const char* SeverityToString(enum LogSeverity s)
{
	switch (s) 
	{
		case LOG_INFO:
			return "INFO";
		case LOG_WARNING:
			return "WARNING";
		case LOG_ERROR:
			return "ERROR";
		default:
			return "UNKNOWN";
	}
}
static void LogMessage(enum LogSeverity s, const char* message)
{
	FILE* output;
	if (s == LOG_ERROR) 
	{
	    output = stderr;
	}
	else
	{
		output = stdout;
	}
	fprintf(output, "[%s] %s\n", SeverityToString(s), message);
	
}

void log_info(const char* message)
{
	LogMessage(LOG_INFO, message);
}

void log_warning(const char* message)
{
	LogMessage(LOG_WARNING, message);
}

void log_error(const char* message)
{
	LogMessage(LOG_ERROR, message);
}
