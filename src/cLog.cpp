/* ============================================================================
 * Name        : Log.cpp
 * Author(s)   : ludkiller, Dan "WildN00b" Printzell
 * Copyright   : GNU GPL V2
 * Description : Logging class
 * ============================================================================ */

#include <stdio.h>
#include <cstdio>
#include <stdarg.h>
#include <ctime>
#include <cstring>

#include "../include/cLog.h"

// The variables for the log class are stored here because the class is used in a statically way.
static char buf[80];
static FILE * fp = NULL;

// Gets the time and date and formats it to a char *
char * getTime() {
	time_t rawtime;
	struct tm * timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buf, 80, "[%x] [%X]", timeinfo);
	return buf;
}


// Not using the constructor and deconstructor because the class is used in a statically way.
cLog::cLog() {
}

cLog::~cLog() {
}

bool cLog::Open(const char * file) {
	// Opens the file for writing. With the flags appending and text.
	fp = fopen(file, "at");
	if (!fp) // If the file didn't exist
		fp = fopen(file, "wt"); // Open it as writing and text.
	if (!fp) {
		Error("Failed to open '%s', disregards saving log file.", file);
		return false;
	}
	strcpy(buf,"----------------------------------------------\n");
	fprintf(fp,"\t_Logging Started_ %s \n",getTime());
	fprintf(fp,buf);

	return true;
}

void cLog::Close() {
	
	fprintf(fp,"\t_Logging Stopped_ %s \n",getTime());
	strcpy(buf,"----------------------------------------------\n");
	fprintf(fp,buf);
	if (fp) { // If fp isn't NULL
		fclose(fp);
		fp = NULL;
	}
}

void cLog::Info(const char * msg, ...) {
	char buf[512] = "\0";
	va_list va;

	// Get all va_args and put them into va.
	va_start(va, msg);
	// Write the date and time to the buffer
	sprintf(buf, "%-18s [*] ", getTime());
	// Write the message with the va_args and add a new line to the buffer
	vsprintf(buf + strlen(buf), msg, va);
	sprintf(buf + strlen(buf), "\n");
	va_end(va);

	// Write the buffer to console and if fp isn't NULL to the log file.
	printf(buf);
	if (fp) {
		fprintf(fp, buf);
		fflush(fp);
	}
}

void cLog::Error(const char * msg, ...) {
	char buf[512] = "\0";
	va_list va;

	// Get all va_args and put them into va.
	va_start(va, msg);
	// Write the date and time to the buffer
	sprintf(buf, "%-18s [!] ", getTime());
	// Write the message with the va_args and add a new line to the buffer
	vsprintf(buf + strlen(buf), msg, va);
	sprintf(buf + strlen(buf), "\n");
	va_end(va);

	// Write the buffer to console and if fp isn't NULL to the log file.
	printf(buf);
	if (fp) {
		fprintf(fp, buf);
		fflush(fp);
	}
}

void cLog::Warning(const char * msg, ...) {
	char buf[512] = "\0";
	va_list va;

	// Get all va_args and put them into va.
	va_start(va, msg);
	// Write the date and time to the buffer
	sprintf(buf, "%-18s [#] ", getTime());
	// Write the message with the va_args and add a new line to the buffer
	vsprintf(buf + strlen(buf), msg, va);
	sprintf(buf + strlen(buf), "\n");
	va_end(va);

	// Write the buffer to console and if fp isn't NULL to the log file.
	printf(buf);
	if (fp) {
		fprintf(fp, buf);
		fflush(fp);
	}
}
