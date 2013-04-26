/************************************************************************************
* TerraME - a software platform for multiple scale spatially-explicit dynamic modeling.
* Copyright � 2001-2012 INPE and TerraLAB/UFOP.
*  
* This code is part of the TerraME framework.
* This framework is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
* 
* You should have received a copy of the GNU Lesser General Public
* License along with this library.
* 
* The authors reassure the license terms regarding the warranties.
* They specifically disclaim any warranties, including, but not limited to,
* the implied warranties of merchantability and fitness for a particular purpose.
* The framework provided hereunder is on an "as is" basis, and the authors have no
* obligation to provide maintenance, support, updates, enhancements, or modifications.
* In no event shall INPE and TerraLAB / UFOP be held liable to any party for direct,
* indirect, special, incidental, or consequential damages arising out of the use
* of this library and its documentation.
*
*************************************************************************************/

#ifndef LOCAL_AGENT_CONCRET_SUBJECT_INTERF
#define LOCAL_AGENT_CONCRET_SUBJECT_INTERF

#include <QtCore/QStringList>

#include "observerInterf.h"

//  Includes do TerraME
#include "terrameIncludes.h"


/**
 * \file localAgentSubjectInterf.h
 * \see SubjectInterf
 * \see LocalAgent
 * \brief Local Agent Concret Subject
 * \author Antonio Jos� da Cunha Rodrigues
 * \author Tiago Garcia de Senna Carneiro
 */
class LocalAgentSubjectInterf : public LocalAgent, public SubjectInterf 
{
public:
    /**
     * \copydoc TerraMEObserver::Subject::getState
     */
    virtual QDataStream& getState(QDataStream &state, Subject *subj,
                                  int observerId, QStringList &attribs) = 0;

    /**
     * Factory of Observer
     * \param type the type of the Observer that will be created
     * \return a pointer to an Observer or a null pointer
     * \see TypesOfObservers
     */
    Observer* createObserver(TypesOfObservers type);

    /**
     * Kills an Observer
     * \param id the unique identifier of an Observer
     */
    bool kill(int id);
};


#endif