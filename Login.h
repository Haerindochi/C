#pragma once

#ifndef _LOGIN_H_
#define _LOGIN_H_

typedef struct ID
{
	char id[10];
	char password[10];
}ID;

ID id;

int Login();

#endif