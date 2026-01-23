#pragma once

enum LogSeverity
{
	LOG_INFO,
	LOG_WARNING,
	LOG_ERROR
};

void log_info(const char* message);
void log_warning(const char* message);
void log_error(const char* message);


