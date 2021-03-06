#pragma once

#include "quantum.h"

#define LAYOUT( \
	k00, k01, k02, k03,  \
	k10, k11, k12,       \
	k13, k14, k15, k16,  \
	k17, k18, k19,       \
	k20, k21, k22, k23   \
) \
{ \
	{k00, k01, k02, k03}, \
	{k10, k11, k12},      \
	{k13, k14, k15, k16}, \
	{k17, k18, k19},      \
	{k20, k21, k22, k23}  \
}
