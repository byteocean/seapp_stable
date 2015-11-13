/**
 * @file	PhysicalAttack.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	0.0.1
 * @date	2015 mar 01
 *
 * @brief	PhysicalAttack class represents a physical attack, which is carried out by LocalFilter sub-modules.
 *
 * @details	TODO
 */
 

#ifndef PHYSICALATTACK_H
#define PHYSICALATTACK_H


#include "AttackBase.h"


using namespace std;


class PhysicalAttack : public AttackBase {

	public:

		/** @brief Constructor. */
		PhysicalAttack();
		
		/** @brief Destructor. */
		virtual ~PhysicalAttack();
		
		/** @brief Execute the actions that make the attack. */
		void execute();
	
};

#endif
