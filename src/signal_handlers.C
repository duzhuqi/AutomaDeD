//////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2014, Lawrence Livermore National Security, LLC.
// Produced at the Lawrence Livermore National Laboratory.
//
// This file is part of AutomaDeD.
// Written by:
// Ignacio Laguna:lagunaperalt1@llnl.gov, Subrata Mitra: mitra4@purdue.edu.
// All rights reserved.
// LLNL-CODE-647182
//
// For details, see https://github.com/scalability-llnl/AutomaDeD
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License (as published by
// the Free Software Foundation) version 2.1 dated February 1999.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
// conditions of the GNU General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//////////////////////////////////////////////////////////////////////////////
/*
 * signal_handlers.cxx
 *
 *  Created on: Nov 28, 2011
 *      Author: Ignacio Laguna
 *     Contact: ilaguna@purdue.edu
 */

//#if HAVE_CONFIG_H
#include "statetracker-config.h"
//#endif

#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//extern StateTracker *tracker;
extern bool savedTraces;

void sigterm_handler(int sig_number)
{
	if (!savedTraces) {
		savedTraces = true; // avoid reentrace to the signal handler
		//tracker->trackLastState();
		//tracker->saveObservedFMS();
	}
}
