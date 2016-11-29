#pragma once

#pragma warning(disable:4733)

#define NOMINMAX

#include <QtGui>

#include <Windows.h>
#include <Psapi.h>
#include <winternl.h>
#include <random>

#pragma comment(lib, "Psapi")

#include <boost\thread.hpp>

#include "Packet.h"